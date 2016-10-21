#include <stdio.h>
#include <iostream>

#ifndef HEADER_H
#define HEADER_H
using namespace std;

typedef struct Noeud {
	char etiquette;
	struct Noeud *ag;
	struct Noeud *ad;
} Noeud;

typedef Noeud* Arbre;

void menu();
Arbre arbnouv();
void enraciner();
int hauteur();
bool est_vide();

#endif