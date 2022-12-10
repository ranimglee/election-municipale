/*
#include"stats.h"
#include"user.h"*/
#ifdef HAVE_CONFIG_H
#include<config.h>
#endif
#include"callbacks.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "reclamation.h"
#include <gtk/gtk.h>

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

/******************************************************/
void ajouter_rec(reclamation rec)
{
 FILE * f;
f=fopen("reclamation.txt", "a+");
    if(f!=NULL)
	{
        fprintf(f,"%s %d %s %s %s %s\n",rec.ident,rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation);
        fclose(f);
	}
}

/***********************************************************/
int modifier_rec(reclamation rec, char ident[])
{
reclamation rec1;
    FILE * f=fopen("reclamation.txt", "r");
    FILE * f2=fopen("rec1.txt", "a+");
    int test=0;
if (f==NULL || f2==NULL)
{
	return ;
}
else {
        while(fscanf(f,"%s %d %s %s %s %s\n",rec.ident,&rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation)!=EOF)
        {
            if((strcmp(rec.ident,ident))==0)
            {
		test=1;
                fprintf(f2,"%s %d %s %s %s %s\n",rec1.ident,rec1.idNumBV,rec1.numlist,rec1.type,rec1.etat,rec1.MsgReclamation);
        
            }
            else
                fprintf(f2,"%s %d %s %s %s %s\n",rec.ident,rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation);

        }
    }
    fclose(f);
    fclose(f2);
    remove("reclamation.txt");
    rename("rec1.txt", "reclamation.txt");
return test;

}
/************************************************************/
int supprimer_reclamation( char IDENT_LIST[])

{
    
    int tr=0;
    reclamation rec;
    FILE *f=fopen("reclamation.txt", "r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    
    {
     while (fscanf(f,"%s %d %s %s %s %s\n",rec.ident,&rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation)!=EOF)
        {
            if( strcmp(IDENT_LIST,rec.numlist)==0 )
                tr=1;
            else
			 fprintf(f2,"%s %d %s %s %s %s\n",rec.ident,rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation);

 }
    }
    fclose(f);
    fclose(f2);
  

    remove("reclamation.txt");
    rename("nouv.txt", "reclamation.txt");
	

return tr;
}
/************************************************************/
reclamation chayma_remplir_champ(char fich[], char id[]){

 	FILE *f=NULL;
    reclamation rec;
    f = fopen(fich,"r");
    if (f!=NULL)
    {

    while (fscanf(f,"%s %d %s %s %s %s\n",rec.ident,&rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation)!=EOF){
		if (strcmp(rec.ident,id)==0){
 		fclose(f);
		return rec;
		};
}
    }
 	fclose(f);
}
/***************************************************************************/
void chercher_rec(GtkWidget *liste, char ident[30])
{

	reclamation rec;
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
store = NULL;
FILE *f;
store = gtk_tree_view_get_model(liste);
if (store == NULL)
{
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("ident",renderer,"text", IDENT,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("idNumBV",renderer,"text",IDNUMBV,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("numlist",renderer,"text",NUMLIST,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("type",renderer,"text",TYPE,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("etat",renderer,"text",ETAT,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("MsgReclamation",renderer,"Text",MSG,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
  
}
store = gtk_list_store_new(COLUMNS, G_TYPE_STRING,G_TYPE_INT,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
   f = fopen("reclamation.txt", "r");
 
   if(f==NULL)
   {
   return;
   }
 
   else
   {  
	f=fopen("reclamation.txt","a+");
         while(fscanf(f,"%s %d %s %s %s %s \n",rec.ident,&rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation)!=EOF)
       {
if(strcmp(rec.ident,ident)==0)
{     
       gtk_list_store_append(store, &iter);
       gtk_list_store_set(store, &iter, IDENT, rec.ident, IDNUMBV, &rec.idNumBV,NUMLIST, rec.numlist, TYPE, rec.type,  ETAT, rec.etat, MSG, rec.MsgReclamation,-1);
}
}
       fclose(f);
       gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
       g_object_unref(store);
   }

}
/************************************************************/
/*void vider(GtkWidget *liste)
{

	reclamation rec;
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
	char ident[30];
	char idNumBV [30];
	char numlist [30];
	char type[30];
	char etat[50];
	char MsgReclamation [100];
 
store = NULL;
FILE *f;
store = gtk_tree_view_get_model(liste);
if (store == NULL)
{
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("ident",renderer,"text", IDENT,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("idNumBV",renderer,"text",IDNUMBV,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("numlist",renderer,"text",NUMLIST,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("type",renderer,"text",TYPE,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("etat",renderer,"text",ETAT,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
   renderer = gtk_cell_renderer_text_new();
   column = gtk_tree_view_column_new_with_attributes("MsgReclamation",renderer,"Text",MSG,NULL);
   gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
 
  
}
store = gtk_list_store_new(COLUMNS, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
gtk_list_store_append(store, &iter);
gtk_tree_view_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_objet_unref(store);
 
}*/
/************************************************************/
/*void nbreclamation(int nb[], char * fichierreclamation, char *  listeelectorale)
{
    reclamation rec;
    listelec L;
    int t[50];
    int i=0,j,n=0;
    FILE *f=fopen(listeelectorale,"r");                                 
    FILE *f1;


    if(f!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %s %s %s %s %s %s %d \n",&L.d.j,&L.d.m,&L.d.a,L.nomListe,L.idenTeteliste,L.idenListe,L.candidat1,L.candidat2,L.candidat3,L.numListe,&L.nbV)!=EOF)
        { 

            t[i]=atoi(L.numListe);
            i++;
        }
    }
    for(j=0;j<i;j++)
    {
        printf("%d |",t[j]);

    }
    printf("\n");
    fclose(f);
    
   nb=malloc(i*sizeof(int));
    for(j=0;j<i;j++)
    {
        f1=fopen(fichierreclamation,"r");
        n=0;
        while(fscanf(f1,"%s %s %s %s %s %s\n",rec.ident,rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation)!=EOF)
        {
            
            if(t[j]==atoi(rec.numlist))
                n++;
        }
        nb[j]=n;
       
    }

for(j=0;j<i;j++) //affichage
    {
        printf("%d |",nb[j]);

    }
  fclose(f1);  
    printf("\n");
}*/
/**********************************************************+*/
/*int nbrtot(char *filename)
{
    FILE * f=fopen(filename,"r");  
    reclamation rec;
    int nbr=0;
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %s\n",rec.ident,rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation)!=EOF)
        {
            nbr ++ ;
        }
    }
    
    fclose(f);
    
    return nbr ;
}*/
/**********************************************************+*/
/*user chercher(char * filename, char* id)
{
    user u ;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %d %d %s %d %d %d %d %s %d %d\n",u.nom,u.prenom,&u.genre,&u.role,u.nationalite,&u.date.j,&u.date.m,&u.date.a,&u.id,u.mdp,&u.ncin,&u.vote)!=EOF)
        {
            if(u.id==atoi(id))
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        u.id=-1;
    return u ;
}*/
/**********************************************************+*/
/*int remplir(listelec t[], char * filename)
{
    reclamation rec;
    listelec L;
    int i=0,j,k,n=0;
    FILE* f=fopen(filename,"r");                                 


    if(f!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %s %s %s %s %s %s %d \n",&L.d.j,&L.d.m,&L.d.a,L.nomListe,L.idenTeteliste,L.idenListe,L.candidat1,L.candidat2,L.candidat3,L.numListe,&L.nbV)!=EOF)
        { 
            
            t[i]=L;
            i++;
        }
    }
    fclose(f);
    return i;
}*/
/**********************************************************+*/
/*void gagnant(user gagnant[], int nbhabitant,listelec t [])
{
    int i,r,q,n=0;
    int nbconseillers=0;
    if (nbhabitant<=5000)
        {nbconseillers=10;}
    else
        if (nbhabitant<=10000)
            {nbconseillers=12;}
        else
            if (nbhabitant<=25000)
                {nbconseillers=16;}
            else
                if (nbhabitant<=50000)
                    {nbconseillers=22;}
                else
                    if (nbhabitant<=100000)
                        {nbconseillers=30;}
                    else
                        if (nbhabitant<=500000)
                            {nbhabitant=40;}
                        else
                            {nbconseillers=60;}

   q=nbconseillers/3;
    printf("%d \n",q);
    for (i=0;i<q;i++)
    {gagnant[n]=chercher("user.txt",t[i].candidat1);
    n++;
    gagnant[n]=chercher("user.txt",t[i].candidat2);
    n++;
    gagnant[n]=chercher("user.txt",t[i].candidat3);
    n++;}
    for(i=0;i<q;i++)
    {
        printf("%s %s %d %d %s %d %d %d %d %s %d %d\n",gagnant[i].nom,gagnant[i].prenom,gagnant[i].genre,gagnant[i].role,gagnant[i].nationalite,gagnant[i].date.j,gagnant[i].date.m,gagnant[i].date.a,gagnant[i].id,gagnant[i].mdp,gagnant[i].ncin,gagnant[i].vote);
    }
    r=nbconseillers%3;
    printf("%d\n",r);
    while(n<nbconseillers)
    {
        if(r!=0)
        {gagnant[n]=chercher("user.txt",t[q].candidat1);
        n++;}

            else if (r==1)
                {gagnant[n]=chercher("user.txt",t[q].candidat2);
                n++;}
    
            else if (r==2)
                {gagnant[n]=chercher("user.txt",t[q].candidat3);
                n++;}
    }
    
for(i=0;i<n;i++)
{
    printf("%s %s %d %d %s %d %d %d %d %s %d %d\n",gagnant[i].nom,gagnant[i].prenom,gagnant[i].genre,gagnant[i].role,gagnant[i].nationalite,gagnant[i].date.j,gagnant[i].date.m,gagnant[i].date.a,gagnant[i].id,gagnant[i].mdp,gagnant[i].ncin,gagnant[i].vote);
} 


}*/
/*****************************************************************************/


void afficher(GtkWidget *liste, char *filename)
{
reclamation rec;
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;
FILE *f;


store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" ident", renderer,"text",IDENT, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" idNumBV ", renderer,"text",IDNUMBV, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" numlist ", renderer,"text",NUMLIST, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" type", renderer,"text",TYPE, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);

	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" etat", renderer,"text",ETAT, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);
	
	renderer=gtk_cell_renderer_text_new();
	column=gtk_tree_view_column_new_with_attributes(" MsgReclamation", renderer,"text",MSG, NULL);
	gtk_tree_view_append_column(GTK_TREE_VIEW(liste), column);
	gtk_tree_view_column_set_expand(column,TRUE);



store=gtk_list_store_new(COLUMNS, G_TYPE_STRING, G_TYPE_INT, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
f=fopen(filename,"r");
if(f!=NULL)

{ f = fopen(filename,"a+");
	while(fscanf(f,"%s %d %s %s %s %s \n",rec.ident,&rec.idNumBV,rec.numlist,rec.type,rec.etat,rec.MsgReclamation)!=EOF)
	{

gtk_list_store_append(store,&iter);
 gtk_list_store_set(store, &iter, IDENT, rec.ident, IDNUMBV, rec.idNumBV,NUMLIST, rec.numlist, TYPE, rec.type,  ETAT, rec.etat, MSG, rec.MsgReclamation,-1);
	}
	fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}
gtk_tree_view_set_enable_search(GTK_TREE_VIEW(liste),TRUE);
}


