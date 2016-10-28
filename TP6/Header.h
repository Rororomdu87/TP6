#include <stdio.h>
#include <iostream>

#ifndef HEADER_H
#define HEADER_H
using namespace std;

typedef char Elt;

typedef struct Noeud {
	Elt e;
	struct Noeud *ag;
	struct Noeud *ad;
} Noeud;

typedef Noeud *Abin;

void menu();
Abin arbnouv();
Abin enracine(Elt e,Abin ag,Abin ad);
Abin gauche(Abin a);
Abin droite(Abin a);
Elt consulterNoeud(Abin a);
void parcoursPrefixe(Abin a);
void parcoursInfixe(Abin a);
void parcoursPostfixe(Abin a);
int hauteur(Abin a);
bool est_vide(Abin a);

#endif