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

enum
{ 
	IDENT,
	IDNUMBV,
	NUMLIST,
	TYPE,
	ETAT,
	MSG,
	COLUMNS
};


void ajouter_rec(reclamation rec);
//void vider(GtkWidget *liste);
int supprimer_reclamation( char IDENT_LIST[]);
reclamation chayma_remplir_champ(char fich[], char Numlist[]);
int modifier_rec(reclamation rec , char ident[]);
//void recher_rec(reclamation rec , char ident[], int *ok);
//int Chercher_reclamation(GtkWidget *liste,char*filename,char*ident);
void afficher(GtkWidget *liste, char *filename);
int chayma_check_substring(char str1[], char str2[]);
void chercher_rec(GtkWidget *liste, char numlist[]);
void afficher_stat_rec(GtkWidget *liste, char *filename);


int nbrtot(char * filename);
/*void nbreclamation(int nb[], char * fichierreclamation, char *  listeelectorale);*/
/*user chercher(char * filename, char *id);
int remplir(listelec t[], char * fichierreclamation);
void gagnant(user gagnant[], int nbhabitant,listelec t []);*/ 
