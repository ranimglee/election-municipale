#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>

typedef struct
{
    int ident;
    int idNumBV;
    int idlist;
    char type[10];
    char objet[50];
    char MsgReclamation [100];
} reclamation;

int ajouter(char * filename, reclamation rec );
int modifier( char * filename, int ident, reclamation rec1 );
int supprimer(char * filename, int ident );
reclamation chercher(char * filename, int ident);

#endif 
