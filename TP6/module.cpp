#include "Header.h"
using namespace std;

void menu()
{
	cout << "************** Menu **************" << endl;
	cout << "1. Creer l'arbre" << endl;
	cout << "2. Parcours en profondeur prefixe" << endl;
	cout << "3. Parcours en profondeur infixe" << endl;
	cout << "4. Parcours en profondeur postfixe" << endl;
	cout << "5. Calculer la hauteur de l'arbre" << endl;
	cout << "6. Quitter" << endl << endl;
}

Abin arbnouv()
{
	return NULL;
}

Abin enracine(Elt e, Abin ag, Abin ad)
{
	Abin A;
	A = new Noeud;
	(*A).ag = ag;
	(*A).ad = ad;
	(*A).e = e;
	return A;
}

Abin gauche(Abin A)
{
	return (*A).ag;
}

Abin droite(Abin A)
{
	return (*A).ad;
}

void parcoursPrefixe(Abin A)
{
	if (A != NULL)
	{
		cout << (*A).e << " ";
		if (!(est_vide(gauche(A))))
		{
			parcoursPrefixe(gauche(A));
		}
		if (!(est_vide(droite(A))))
		{
			parcoursPrefixe(droite(A));
		}
	}
}

void parcoursInfixe(Abin A)
{
	if (A != NULL)
	{
		if (!(est_vide(gauche(A))))
		{
			parcoursInfixe(gauche(A));
		}
		cout << (*A).e << " ";
		if (!(est_vide(droite(A))))
		{
			parcoursInfixe(droite(A));
		}
	}
}

void parcoursPostfixe(Abin A)
{
	if (A != NULL)
	{
		if (!(est_vide(gauche(A))))
		{
			parcoursPostfixe(gauche(A));
		}
		if (!(est_vide(droite(A))))
		{
			parcoursPostfixe(droite(A));
		}
		cout << (*A).e << " ";
	}
}

int max(int a,int b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int hauteur(Abin A)
{
	int hg, hd;
	if (A == NULL)
	{
		return 0;
	}
	else
	{
		hg = hauteur(gauche(A));
		hd = hauteur(droite(A));
		return 1 + max(hg, hd);
	}
}

bool est_vide(Abin A)
{
	return A == NULL;
}