#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include "reclamation.h"
#include "callbacks.h"
#include "interface.h"
#include "support.h"
int chayma_edit=0;
char Numlist[20]="";
int chayma_accept=0;
int chayma_sup_oui_non=0;
char chayma_identifiant[50]="";
int chayma_tree_view=0;

gboolean
on_modier_reclamation_focus_in_event   (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_chayma_entry_mdf_id_insert_text     (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_chayma_entry_mdf_listele_insert_text
                                        (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_chayma_spinbutton_mdf_NumBV_changed (GtkEditable     *editable,
                                        gpointer         user_data)
{

}


void
on_chayma_combobox_mdf_etat_changed    (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}


void
on_chayma_button_mdf_re_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chayma_window_mod;
GtkWidget *chayma_window_aff;
chayma_window_mod=lookup_widget(button,"modifier_reclamation");
gtk_widget_destroy(chayma_window_mod);
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
chayma_window_aff=create_Liste_reclamation();
gtk_widget_show(chayma_window_aff);
}


void
on_chayma_button_mdf_conf_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_chayma_checkbutton_mdf_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton)){ 
	chayma_accept = 1;
}else{
	chayma_accept = 0;
}
}


void
on_chayma_entry_mdf_msg_insert_text    (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_chayma_combobox_mdf_typ_changed     (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}


gboolean
on_Liste_reclamation_focus_in_event    (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_chayma_treeview_row_activated       (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter  iter;
gchar *numlist;


GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model,&iter,path)){
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0 , &numlist ,-1);
strcpy(Numlist,numlist); 
chayma_edit = 0;
}
}


void
on_chayma_entry_ls_numlist_insert_text (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_chayma_button_ls_recherche_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_chayma_button_ls_actualiser_clicked (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chayma_treeview_aff;
GtkWidget *chayma_window_aff;
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
gtk_widget_destroy(chayma_window_aff);
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
chayma_window_aff=create_Liste_reclamation();
gtk_widget_show(chayma_window_aff);
chayma_treeview_aff=lookup_widget(chayma_window_aff,"chayma_treeview_ls");
afficher(chayma_treeview_aff,"reclamation.txt");
}


void
on_chayma_button_ls_dec_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_chayma_button_ls_ajout_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chayma_window_aj;
GtkWidget *chayma_window_aff;
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
gtk_widget_destroy(chayma_window_aff);
chayma_window_aj=lookup_widget(button,"ajouter_reclamation");
chayma_window_aj=create_ajouter_reclamation();
gtk_widget_show(chayma_window_aj);
}


void
on_chayma_button_ls_mdf_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
if (strlen(Numlist)>0){
GtkWidget *chayma_window_mod;
GtkWidget *chayma_window_aff;
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
gtk_widget_destroy(chayma_window_aff);
chayma_window_mod=lookup_widget(button,"modifier_reclamation");
chayma_window_mod=create_modifier_reclamation();
gtk_widget_show(chayma_window_mod);}
/*else{
GtkWidget *msg;
msg = lookup_widget(widget,"label297");
gtk_label_set_text(msg,"Selectionner reclamation par double click!");
}*/
}


void
on_chayma_button_ls_sup_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chayma_window_sup;
GtkWidget *chayma_window_aff,w1;
GtkWidget *treeview_aff ;


treeview_aff= lookup_widget(GTK_WIDGET(button),"chayma_treeview_ls");
//chayma_window_sup=lookup_widget(button,"chayma_window_suprec");
chayma_window_sup=create_chayma_window_suprec();
gtk_widget_show(chayma_window_sup);
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
gtk_widget_destroy(chayma_window_aff);
}


void
on_chayma_button_stat_rec_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_chayma_radiobutton_ls_type_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_chayma_radiobutton_ls_Etat_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_chayma_button_stat_gag_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ident_log_in_insert_text            (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_mdp_log_in_insert_text              (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_connecter_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Liste_reclamation,*log_in;
GtkWidget *user,*pass,*resultat;
char identifiant[20];
char password[20];
char text[20];
user=lookup_widget(button,"ident_log_in");
pass=lookup_widget(button,"mdp_log_in");
strcpy(identifiant,gtk_entry_get_text(GTK_ENTRY(user)));
strcpy(password,gtk_entry_get_text(GTK_ENTRY(pass)));
if((strcmp(identifiant,"reclamation")==0)&&(strcmp(password,"reclamation")==0))
{
log_in=lookup_widget(button,"Log_in");
Liste_reclamation=create_Liste_reclamation();
gtk_widget_show(Liste_reclamation);
gtk_widget_destroy(log_in);}
else
{resultat=lookup_widget(button,"label_log_in");
strcpy(text,"not found");
gtk_label_set_text(GTK_LABEL(resultat),text);
}
}

void
on_chayma_entry_aj_id_insert_text      (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_chayma_entry_aj_listelec_insert_text
                                        (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_chayma_spinbutton_aj_NumBV_changed  (GtkEditable     *editable,
                                        gpointer         user_data)
{

}


void
on_chayma_combobox_aj_etat_changed     (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}


void
on_chayma_button_aj_ret_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chayma_window_aj;
GtkWidget *chayma_window_aff;
chayma_window_aj=lookup_widget(button,"ajouter_reclamation");
gtk_widget_destroy(chayma_window_aj);
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
chayma_window_aff=create_Liste_reclamation();
gtk_widget_show(chayma_window_aff);
}


void
on_chayma_button_aj_conf_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{
reclamation rec;
int NBV=0;
GtkWidget *ajouter_reclamation, *liste_reclamation ,*chayma_treeview;
GtkWidget *inpute1, *inpute2, *inpute3, *inpute4, *inpute5,*inpute6;
ajouter_reclamation=lookup_widget(button,"ajouter_reclamation");
inpute1=lookup_widget(button,"chayma_entry_aj_id");
inpute2=lookup_widget(button,"chayma_spinbutton_aj_NumBV");
inpute3=lookup_widget(button,"chayma_entry_aj_listelec");
inpute4=lookup_widget(button,"chayma_combobox_aj_type");
inpute5=lookup_widget(button,"chayma_combobox_aj_etat");
inpute6=lookup_widget(button,"chayma_entry_aj_msg");

strcpy(rec.ident,gtk_entry_get_text(GTK_ENTRY(inpute1)));

rec.idNumBV=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(inpute2));

strcpy(rec.numlist,gtk_entry_get_text(GTK_ENTRY(inpute3)));
strcpy(rec.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inpute4)));
strcpy(rec.etat,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inpute5)));

strcpy(rec.MsgReclamation,gtk_entry_get_text(GTK_ENTRY(inpute6)));
ajouter_rec(rec);
gtk_widget_destroy(ajouter_reclamation);
liste_reclamation=create_Liste_reclamation();
gtk_widget_show(liste_reclamation);
chayma_treeview=lookup_widget(liste_reclamation,"chayma_treeview_ls");
afficher(chayma_treeview,"reclamation.txt");
}


void
on_chayma_checkbutton_aj_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

if (gtk_toggle_button_get_active(togglebutton)){ 
	chayma_accept = 1;
}else{
	chayma_accept = 0;

}
}


void
on_chayma_combobox_aj_type_changed     (GtkComboBox     *combobox,
                                        gpointer         user_data)
{

}


void
on_chayma_entry_aj_msg_insert_text     (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data)
{

}


void
on_chayma_radiobutton_sup_rec_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		chayma_sup_oui_non=1;
	}
}


void
on_chayma_radiobutton_sup_non_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton))){
		chayma_sup_oui_non=0;
	}
}


/*void
on_chayma_button_conf_suprec_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{
}

*/
void
on_chayma_button_conf_suprec_clicked   (GtkButton       *button,
                                        gpointer         user_data)
{
//GtkWidget *pInfo ;
//reclamation rec;
//if ( chayma_sup_oui_non==1)
int tr=supprimer_reclamation(Numlist);
/*	if (tr==0)
	{
	 	pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,"SUPPRESSION EFFECTUÉ");
		switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
		{
		case GTK_RESPONSE_OK:
		
		{
			
			gtk_widget_destroy(pInfo);

		*/
		GtkWidget *chayma_reclamation ,*treeview_aff, *chayma_supp_confirmer , *w3;
			
		
		w3 = lookup_widget(button,"chayma_window_suprec");
		treeview_aff= lookup_widget(GTK_WIDGET(button),"chayma_treeview_ls");
		gtk_widget_show(treeview_aff);
		
		gtk_widget_destroy (w3);
                chayma_reclamation=create_Liste_reclamation();
		gtk_widget_show(chayma_reclamation);

		afficher(treeview_aff,"reclamation.txt") ;
	/*	}
		}
		}
}
else 
{
		pInfo=gtk_message_dialog_new(GTK_WINDOW(user_data),GTK_DIALOG_MODAL,GTK_MESSAGE_INFO,GTK_BUTTONS_OK,"SUPPRESSION ANNULÉ");
		switch(gtk_dialog_run(GTK_DIALOG(pInfo)))
		{
		case GTK_RESPONSE_OK:
		
		{gtk_widget_destroy(pInfo);
		GtkWidget *chayma_reclamation ,*treeview_aff, *chayma_supp_confirmer , *w3;
		w3 = lookup_widget(button,"chayma_window_suprec");
		gtk_widget_destroy (w3);

		chayma_reclamation=create_Liste_reclamation();
		gtk_widget_show(chayma_reclamation);

		afficher(treeview_aff,"reclamation.txt") ;
		}}

}*/
}

