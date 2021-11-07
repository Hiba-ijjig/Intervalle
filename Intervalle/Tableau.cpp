#include "Tableau.h"
using namespace intervalle;

intervalle::Tableau::Tableau(int taille)
{
    assert(taille > 0);
    this->taille = 0;
    this->tab = new float [taille];
}

intervalle::Tableau::~Tableau()
{
    if (this->tab)
    {
        delete[] this->tab;
        this->tab = NULL;
    }
}

intervalle::Tableau::Tableau(const Tableau& t)
{
    this->taille = t.taille;
    this->tab = new float[t.taille];
    for (int i = 0; i < this->taille; i++) this->tab[i] = t.tab[i];
}

Tableau& intervalle::Tableau::operator=(const Tableau& t)
{
    if (this != &t)
    {
        if (this->tab)
        {
            delete[]this->tab;
            this->tab = NULL;
        }
        this->taille = t.taille;
        this->tab = new float[t.taille];
        for (int i = 0; i < this->taille; i++)this->tab[i] = t.tab[i];
    }
    return *(this);
}

float& intervalle::Tableau::operator[](int ind)
{
    assert(ind >= 0 && ind < this->taille);
    return (this->tab[ind]);
}

void intervalle::Tableau::affiche() const
{
    for (int i = 0; i < this->taille; i++)
        cout << this->tab[i] << "\t";
}
