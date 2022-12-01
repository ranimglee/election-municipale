#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>


typedef struct
{
    int ident;
    int idNumBV;
    int numlist;
    char type[10];
    char objet[50];
    char MsgReclamation [100];
} reclamation;




/*int ajouter_rec(char * filename, reclamation rec );
int modifier( char * filename, int ident, reclamation rec1 );
int supprimer(char * filename, int ident );
reclamation chercher(char * filename, int ident);*/
/*void nbreclamation(int nb[], char * fichierreclamation, char *  listeelectorale);*/
/*int nbrtot(char * filename);*/
/*user chercher(char * filename, int id);
int remplir(listelec t[], char * fichierreclamation);
void gagnant(user gagnant[], int nbhabitant,listelec t []);*/
#endif 
