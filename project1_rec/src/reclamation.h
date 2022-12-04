#include<gtk/gtk.h>
/*#include"stats.h"
#include"user.h"*/


typedef struct
{
    char ident[30];
    char idNumBV [30];
    char numlist [30];
    char type[30];
    char etat[50];
    char MsgReclamation [100];
} reclamation;



void ajouter_rec(reclamation rec);
void afficher_rec(GtkWidget *liste);
void supprimer_rec(reclamation rec);
void modifier_rec(reclamation rec , char ident[]);
void recher_rec(reclamation rec , char ident[], int *ok);

/*int ajouter_rec(char * filename, reclamation rec );
int modifier( char * filename, char ident[], reclamation rec1 );*/
/*int supprimer(char * filename, char ident[]);*/
/*reclamation chercher(char * filename, char ident[]);*/
/*int nbrtot(char * filename);*/
/*void nbreclamation(int nb[], char * fichierreclamation, char *  listeelectorale);*/
/*user chercher(char * filename, char *id);
int remplir(listelec t[], char * fichierreclamation);
void gagnant(user gagnant[], int nbhabitant,listelec t []);*/ 
