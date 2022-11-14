#include <stdio.h>
#include <string.h>
#include"reclamation.h"

int main()
{
    reclamation rec1={79,5,150087,"pratique","exclu","textreclamation1"},
    rec2= {64,4,123456,"theorique","bruit","textreclamation2"},
    rec3;
    int x;
    x=ajouter("reclamation.txt", rec2);
    x=ajouter("reclamation.txt", rec3);
    if(x==1)
        printf("\najout de reclamation avec succés");
    else printf("\nechec ajout");
    
    x=modifier("reclamation.txt",11235679,rec2);

    if(x==1)
        printf("\nModification de reclamation avec succés");
    else printf("\nechec Modification");
    x=supprimer("reclamation.txt",11234564);
    if(x==1)
        printf("\nSuppression de reclamation avec succés");
    else printf("\nechec Suppression");
    rec3=chercher("reclamation.txt",11235679);
    if(rec3.ident==-1)
        printf("introuvable");
    return 0;

}