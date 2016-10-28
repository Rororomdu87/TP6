#include <stdio.h>
#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	int choix;
	int h;
	Abin A, R, T1, V, S, U, P, T2, Q, B;
	A = arbnouv();
	
	do
	{
		menu();
		cin >> choix;
		switch (choix)
		{
			case 1:
				T2 = enracine('t', arbnouv(), arbnouv());
				S = enracine('s', T2, arbnouv());
				V = enracine('v', arbnouv(), arbnouv());
				R = enracine('r', V, S);
				U = enracine('u', arbnouv(), arbnouv());
				Q = enracine('q', arbnouv(), arbnouv());
				B = enracine('b', arbnouv(), arbnouv());
				P = enracine('p', Q, B);
				T1 = enracine('t', U, P);
				A = enracine('a', R, T1);
				cout << endl;
				break;
			case 2:
				cout << endl;
				parcoursPrefixe(A);
				cout << endl << endl;
				break;
			case 3:
				cout << endl;
				parcoursInfixe(A);
				cout << endl << endl;
				break;
			case 4:
				cout << endl;
				parcoursPostfixe(A);
				cout << endl << endl;
				break;
			case 5:
				cout << endl;
				h = hauteur(A);
				cout << "La hauteur de l'arbre est : " << h << endl << endl;
				break;
			default:
				cout << "Au revoir !" << endl;
		}
	} while (choix < 6);
}