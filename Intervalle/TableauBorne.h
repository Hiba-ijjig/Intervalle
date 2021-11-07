#pragma once
#include "Tableau.h"

namespace intervalle {
    class TableauBorne : private Tableau
    {
        float inf, sup;
    public:
        TableauBorne(int t, float inf, float sup);
        float operator[](int indice)const;
        void affiche()const;
    };

}