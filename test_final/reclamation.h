#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>
#include<string.h>


typedef struct
{
    char ident[30];
    char idNumBV [30];
    char numlist [30];
    char type[30];
    char objet[50];
    char MsgReclamation [100];
} reclamation;




/*int ajouter_rec(char * filename, reclamation rec );
int modifier( char * filename, char ident[], reclamation rec1 );*/
/*int supprimer(char * filename, char ident[]);*/
/*reclamation chercher(char * filename, char ident[]);*/
/*int nbrtot(char * filename);*/
void nbreclamation(int nb[], char * fichierreclamation, char *  listeelectorale);
/*user chercher(char * filename, int id);
int remplir(listelec t[], char * fichierreclamation);
void gagnant(user gagnant[], int nbhabitant,listelec t []);*/
#endif 
