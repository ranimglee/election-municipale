#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

typedef struct
{
int j ,m,a;

}Date;


typedef struct
{
char nom[50];
char prenom [50];
int genre;
int role;
char nationalite[20];
Date date ;
int id;
char mdp[50];
int ncin;
int vote;
}user;


int ajouter(char *filename,user u);
int modifier( char *filename, int id, user nouv);
int supprimer(char *filename, int id);
user chercher(char *filename, int id);
float age_moy(char* filename);
int nbr_obs(char*filename);
int trier_util (char *filename);

#endif // USER_H_INCLUDED
