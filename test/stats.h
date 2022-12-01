#ifndef STATS_H_INCLUDED
#define STATS_H_INCLUDED


#include <stdio.h>
typedef struct
{
int j;
int m;
int a;
}date;

typedef struct
{
date d;
char nomListe[50] ;
int idenTeteliste ;
int idenListe ;
int candidat1 ;
int candidat2 ;
int candidat3 ;
int numListe ;
int nbV;
}listelec;

typedef struct
{
char utilisa[50] ;
int numutilisa ;
int vote;
}utilisateur;

/*int ajouter_utilis(char * utilis , utilisateur u );
int ajouter_liste(char * liste , listelec L );
void fichier(char * liste );
void vote (char *liste, char *utilis, int *VB , int *Nov );
int trier(char *liste  );

 int modifier_liste( char * liste, int uvote );*/

#endif // STATS_H_INCLUDED
