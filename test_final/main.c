#include <stdio.h>
#include <string.h>
#include"reclamation.h"
#include"stats.h"
/*#include"user.h"*/

int main()
{
    
   
    reclamation rec, rec1={"79","5","3","pratique","exclu","textreclamation1"},
    rec2= {"64","4","2","theorique","bruit","textreclamation2"},
    rec3= {"12","4","1","theorique","test","textreclamation3"};
    
    /*int x;
    x=ajouter_rec("reclamation.txt", rec1);
    x=ajouter_rec("reclamation.txt", rec2);
    x=ajouter_rec("reclamation.txt", rec3);
    if(x==1)
        printf("\najout de reclamation avec succes");
    else printf("\nechec ajout"); */  
 /* x=modifier("reclamation.txt","64",rec3);

    if(x==1)
        printf("\nModification de reclamation avec succes");
    else printf("\nechec Modification");*/
     /*x=supprimer("reclamation.txt","12");
    if(x==1)
        printf("\nSuppression de reclamation avec succes");
    else {printf("\nechec Suppression");
    printf("\n");}*/
    
    /*rec=chercher("reclamation.txt","50");
    if(strcmp(rec.ident,"-1")==0)
        
        printf("\nintrouvable");
        printf("\n");*/
    
    /****************/
    
    /*  nombre de reclamantion totale
    int k;
    k=nbrtot("reclamation.txt");
    printf("%d",k);*/
    
    int nb[50];
    nbreclamation(nb,"reclamation.txt", "liste.txt");
    
    /****************/
    /*user t[50];
    listelec L[50];
    int nbhabitant=5000;
    int x=remplir(L, "liste.txt");
     gagnant( t, nbhabitant, L);*/

    return 0;


}