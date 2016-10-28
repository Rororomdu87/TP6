#include <stdio.h>
#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	int choix;
	Elt e;
	Abin a;
	Abin ag;
	Abin ad;

	menu();
	cin >> choix;
	
	while (choix < 7)
	{
		switch (choix)
		{
			case 1:
				arbnouv();
				break;
			case 2:
				enracine(e, ag, ad);
				break;
			case 3:
				parcoursPrefixe(a);
				break;
			case 4:
				parcoursInfixe(a);
				break;
			case 5:
				parcoursPostfixe(a);
				break;
			case 6:
				cout << "La hauteur de l'arbre est :" << hauteur(a) << endl;
				break;
			default:
				cout << "Au revoir !" << endl;
		}
	}
}