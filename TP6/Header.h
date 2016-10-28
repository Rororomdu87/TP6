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
// Cette proc�dure permet d'afficher le menu
// Param�tre : Aucun
////////////////////////////////////////////
void menu();

///////////////////////////////////////////////
// Cette fonction permet de creer un arbre vide
// Param�tre : Aucun
// Retourne : un arbre vide
///////////////////////////////////////////////
Abin arbnouv();

//////////////////////////////////////////////////////////////
// Cette fonction permet de concatener deux arbres en un noeud
// Param�tre : Le noeud, le premier arbre, le second arbre
// Retourne : L'arbre concatener
//////////////////////////////////////////////////////////////
Abin enracine(Elt e,Abin ag,Abin ad);

///////////////////////////////////////////////
// Cette fonction retourne le sous arbre gauche
// Param�tre : L'arbre donn�
// Retourne : Le sous-arbre gauche
///////////////////////////////////////////////
Abin gauche(Abin A);

//////////////////////////////////////////////
// Cette fonction retourne le sous-arbre droit
// Param�tre : L'arbre donn�
// Retourne : Le sous-arbre droit
//////////////////////////////////////////////
Abin droite(Abin A);
//////////////////////////////////////////////
// Cette proc�dure permet de parcourir l'arbre
// � l'aide d'un parcours pr�fixe
// Param�tre : L'arbre donn�
//////////////////////////////////////////////
void parcoursPrefixe(Abin A);

//////////////////////////////////////////////
// Cette proc�dure permet de parcourir l'arbre
// � l'aide d'un parcours infixe
// Param�tre : L'arbre donn�
//////////////////////////////////////////////
void parcoursInfixe(Abin A);

//////////////////////////////////////////////
// Cette proc�dure permet de parcourir l'arbre
// � l'aide d'un parcours postfixe
// Param�tre : L'arbre donn�
//////////////////////////////////////////////
void parcoursPostfixe(Abin A);

//////////////////////////////////////////////////////////
// Cette fonction permet de calculer la hauteur de l'arbre
// Param�tre : L'arbre donn�
// Retourne : La hauteur de l'arbre
//////////////////////////////////////////////////////////
int hauteur(Abin A);

///////////////////////////////////////////////////////
// Cette fonction permet de v�rifi� si l'arbre est vide
// Param�tre : L'arbre donn�
// Retourne : Vrai si l'arbre est vide Faux sinon
///////////////////////////////////////////////////////
bool est_vide(Abin A);

#endif