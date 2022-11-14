#include "reclamation.h"

int ajouter(char * filename, reclamation rec )
{
    FILE * f=fopen("filename.txt", "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %s %s %s\n",rec.ident,rec.idNumBV,rec.idlist,rec.type,rec.objet,rec.MsgReclamation);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int ident, reclamation rec1 )
{
    int tr=0;
    reclamation rec;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("rec1.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %s %s\n",&rec.ident,&rec.idNumBV,&rec.idlist,rec.type,rec.objet,rec.MsgReclamation)!=EOF)
        {
            if(rec.ident== ident)
            {
                fprintf(f2,"%d %d %d %s %s %s\n",rec1.ident,rec1.idNumBV,rec1.idlist,rec1.type,rec1.objet,rec1.MsgReclamation);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %s %s %s\n",rec.ident,rec.idNumBV,rec.idlist,rec.type,rec.objet,rec.MsgReclamation);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("rec1.txt", filename);
    return tr;

}
int supprimer(char * filename, int ident)
{
    int tr=0;
    reclamation rec;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("rec1.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %s %s %s\n",&rec.ident,&rec.idNumBV,&rec.idlist,rec.type,rec.objet,rec.MsgReclamation)!=EOF)
        {
            if(rec.ident== ident)
                tr=1;
            else
                fprintf(f2,"%d %d %d %s %s %s\n",rec.ident,rec.idNumBV,rec.idlist,rec.type,rec.objet,rec.MsgReclamation);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("rec1.txt", filename);
    return tr;
}
reclamation chercher(char * filename, int ident)
{
    reclamation rec;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %d %s %s %s\n",&rec.ident,&rec.idNumBV,&rec.idlist,rec.type,rec.objet,rec.MsgReclamation)!=EOF)
        {
            if(rec.ident== ident)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        rec.ident=-1;
    return rec;

}

