#include<gtk/gtk.h>
/*#include"stats.h"
#include"user.h"*/


typedef struct
{
    char ident[30];
    int idNumBV ;
    char numlist [30];
    char type[30];
    char etat[50];
    char MsgReclamation [100];
} reclamation;



void ajouter_rec(reclamation rec);
void vider(GtkWidget *liste);
int supprimer_reclamation( char IDENT_LIST[]);
reclamation chayma_remplir_champ(char fich[], char id[]);
int modifier_rec(reclamation rec , char ident[]);
void recher_rec(reclamation rec , char ident[], int *ok);
void afficher(GtkWidget *liste, char *filename);
/*
int nbrtot(char * filename);
void nbreclamation(int nb[], char * fichierreclamation, char *  listeelectorale);*/
/*user chercher(char * filename, char *id);
int remplir(listelec t[], char * fichierreclamation);
void gagnant(user gagnant[], int nbhabitant,listelec t []);*/ 
