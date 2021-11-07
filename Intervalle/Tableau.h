#pragma once
#include <iostream>
#include <assert.h>
using namespace std;
namespace intervalle
{
	class Tableau
	{
	protected:
		int taille;
		float* tab;
	public:
		Tableau(int taille);
		~Tableau();
		Tableau(const Tableau& t);
		Tableau& operator=(const Tableau& t);
		float& operator[](int ind);
		void affiche()const;
	};
}
