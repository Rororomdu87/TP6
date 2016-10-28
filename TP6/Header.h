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

////////////////////////////////////////////
// Cette procédure permet d'afficher le menu
// Paramètre : Aucun
////////////////////////////////////////////
void menu();

///////////////////////////////////////////////
// Cette fonction permet de creer un arbre vide
// Paramètre : Aucun
// Retourne : un arbre vide
///////////////////////////////////////////////
Abin arbnouv();

//////////////////////////////////////////////////////////////
// Cette fonction permet de concatener deux arbres en un noeud
// Paramètre : Le noeud, le premier arbre, le second arbre
// Retourne : L'arbre concatener
//////////////////////////////////////////////////////////////
Abin enracine(Elt e,Abin ag,Abin ad);

///////////////////////////////////////////////
// Cette fonction retourne le sous arbre gauche
// Paramètre : L'arbre donné
// Retourne : Le sous-arbre gauche
///////////////////////////////////////////////
Abin gauche(Abin A);

//////////////////////////////////////////////
// Cette fonction retourne le sous-arbre droit
// Paramètre : L'arbre donné
// Retourne : Le sous-arbre droit
//////////////////////////////////////////////
Abin droite(Abin A);
//////////////////////////////////////////////
// Cette procédure permet de parcourir l'arbre
// à l'aide d'un parcours préfixe
// Paramètre : L'arbre donné
//////////////////////////////////////////////
void parcoursPrefixe(Abin A);

//////////////////////////////////////////////
// Cette procédure permet de parcourir l'arbre
// à l'aide d'un parcours infixe
// Paramètre : L'arbre donné
//////////////////////////////////////////////
void parcoursInfixe(Abin A);

//////////////////////////////////////////////
// Cette procédure permet de parcourir l'arbre
// à l'aide d'un parcours postfixe
// Paramètre : L'arbre donné
//////////////////////////////////////////////
void parcoursPostfixe(Abin A);

//////////////////////////////////////////////////////////
// Cette fonction permet de calculer la hauteur de l'arbre
// Paramètre : L'arbre donné
// Retourne : La hauteur de l'arbre
//////////////////////////////////////////////////////////
int hauteur(Abin A);

///////////////////////////////////////////////////////
// Cette fonction permet de vérifié si l'arbre est vide
// Paramètre : L'arbre donné
// Retourne : Vrai si l'arbre est vide Faux sinon
///////////////////////////////////////////////////////
bool est_vide(Abin A);

#endif