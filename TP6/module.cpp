#include "Header.h"
using namespace std;

void menu()
{
	cout << "************** Menu **************" << endl;
	cout << "1. Creer un arbre" << endl;
	cout << "2. Enraciner" << endl;
	cout << "3. Parcours en profondeur prefixe" << endl;
	cout << "4. Parcours en profondeur infixe" << endl;
	cout << "5. Parcours en profondeur postfixe" << endl;
	cout << "6. Calculer la hauteur de l'arbre" << endl;
	cout << "7. Quitter" << endl << endl;
}

Abin arbnouv()
{
	return NULL;
}

Abin enracine(Elt e, Abin ag, Abin ad)
{
	Abin a;
	(*a).ag = ag;
	(*a).ad = ad;
	(*a).e = e;
	return a;
}

Abin gauche(Abin a)
{
	return (*a).ag;
}

Abin droite(Abin a)
{
	return (*a).ad;
}

Elt consulterNoeud(Abin a)
{
	return (*a).e;
}

void parcoursPrefixe(Abin a)
{
	consulterNoeud(a);
	if (!(est_vide(gauche(a))))
	{
		parcoursPrefixe(gauche(a));
	}
	if (!(est_vide(droite(a))))
	{
		parcoursPrefixe(droite(a));
	}
}

void parcoursInfixe(Abin a)
{
	if (!(est_vide(gauche(a))))
	{
		parcoursInfixe(gauche(a));
	}
	consulterNoeud(a);
	if (!(est_vide(droite(a))))
	{
		parcoursInfixe(droite(a));
	}
}

void parcoursPostfixe(Abin a)
{
	if (!(est_vide(gauche(a))))
	{
		parcoursPostfixe(gauche(a));
	}
	if (!(est_vide(droite(a))))
	{
		parcoursPostfixe(droite(a));
	}
	consulterNoeud(a);
}

int hauteur(Abin a)
{
	int max(int a, int b);
	if (a == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + max(hauteur(gauche((*a).ag)), hauteur(droite((*a).ad)));
	}
}

bool est_vide(Abin a)
{
	return a == NULL;
}