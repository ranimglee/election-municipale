#include<stdlib.h>
#include "reclamation.h"
#include"stats.h"
#include"user.h"


/*int ajouter_rec(char * filename, reclamation rec )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %s %s %s\n",rec.ident,rec.idNumBV,rec.numlist,rec.type,rec.objet,rec.MsgReclamation);
        fclose(f);
        return 1;
    }
    else return 0;
}*/

/**********************************************************+*/
/*int modifier( char * filename, int ident, reclamation rec1 )
{
    int tr=0;
    reclamation rec;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("rec1.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %s %s\n",&rec.ident,&rec.idNumBV,&rec.numlist,rec.type,rec.objet,rec.MsgReclamation)!=EOF)
        {
            if(rec.ident== ident)
            {
                fprintf(f2,"%d %d %d %s %s %s\n",rec1.ident,rec1.idNumBV,rec1.numlist,rec1.type,rec1.objet,rec1.MsgReclamation);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %s %s %s\n",rec.ident,rec.idNumBV,rec.numlist,rec.type,rec.objet,rec.MsgReclamation);
e
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("rec1.txt", filename);
    return tr;

}*/
/**********************************************************+*/
/*int supprimer(char * filename, int ident)
{
    int tr=0;
    reclamation rec;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("rec1.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %s %s\n",&rec.ident,&rec.idNumBV,&rec.numlist,rec.type,rec.objet,rec.MsgReclamation)!=EOF)
        {
            if(rec.ident== ident)
                tr=1;
            else
                fprintf(f2,"%d %d %d %s %s %s\n",rec.ident,rec.idNumBV,rec.numlist,rec.type,rec.objet,rec.MsgReclamation);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("rec1.txt", filename);
    return tr;
}*/
/**********************************************************+*/
/*reclamation chercher(char * filename, int ident)
{
    reclamation rec;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %d %s %s %s\n",&rec.ident,&rec.idNumBV,&rec.numlist,rec.type,rec.objet,rec.MsgReclamation)!=EOF)
        {
            if(rec.ident== ident)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        rec.ident=-1;
    return rec;

}*/
/**********************************************************+*/
/*void nbreclamation(int nb[], char * fichierreclamation, char *  listeelectorale)
{
    reclamation rec;
    listelec L;
    int t[50],i=0,j,k,n=0;
    FILE *f=fopen(listeelectorale,"r");                                 
    FILE *f1;


    if(f!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %d %d %d %d %d %d %d \n",&L.d.j,&L.d.m,&L.d.a,L.nomListe,&L.idenTeteliste,&L.idenListe,&L.candidat1,&L.candidat2,&L.candidat3,&L.numListe,&L.nbV)!=EOF)
        { 
            
            t[i]=L.numListe;
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
        while(fscanf(f1,"%d %d %d %s %s %s\n",&rec.ident,&rec.idNumBV,&rec.numlist,rec.type,rec.objet,rec.MsgReclamation)!=EOF)
        {
            
            if(t[j]==rec.numlist)
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
        while(fscanf(f,"%d %d %d %s %s %s\n",&rec.ident,&rec.idNumBV,&rec.numlist,rec.type,rec.objet,rec.MsgReclamation)!=EOF)
        {
            nbr ++ ;
        }
    }
    
    fclose(f);
    printf("%d",nbr);
    printf("\n");
    return nbr ;
}*/
/**********************************************************+*/
/*user chercher(char * filename, int id)
{
    user u ;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %d %d %s %d %d %d %d %s %d %d\n",u.nom,u.prenom,&u.genre,&u.role,u.nationalite,&u.date.j,&u.date.m,&u.date.a,&u.id,u.mdp,&u.ncin,&u.vote)!=EOF)
        {
            if(u.id== id)
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
        while(fscanf(f,"%d %d %d %s %d %d %d %d %d %d %d \n",&L.d.j,&L.d.m,&L.d.a,L.nomListe,&L.idenTeteliste,&L.idenListe,&L.candidat1,&L.candidat2,&L.candidat3,&L.numListe,&L.nbV)!=EOF)
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