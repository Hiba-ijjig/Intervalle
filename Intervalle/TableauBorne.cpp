#include "TableauBorne.h"

intervalle::TableauBorne::TableauBorne(int t, float inf, float sup):Tableau(t)
{
    if (inf > sup)
    {
        this->inf = sup;
        this->sup = inf;
    }
    else
    {
        this->inf = inf;
        this->sup = sup;
    }
}

float intervalle::TableauBorne::operator[](int indice) const
{
    assert(indice >= 0 && indice < this->taille);
    return (this->tab[indice]);
}

void intervalle::TableauBorne::affiche() const
{
    cout << "\nla borne inférieure est: " << this->inf << "\t laborne supérieure est: " << this->sup;
    cout << "\n";
    for (int i = 0; i < this->taille; i++)
        cout << this->tab[i] << "\t";
}
