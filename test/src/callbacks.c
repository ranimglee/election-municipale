#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include"reclamation.h"
//int chayma_flag_edit=0;
char Numlist[20]="";

void
on_chayma_radiobutton_supnon_toggled   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_chayma_radiobutton_supoui_toggled   (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}


void
on_chayma_button_supconf_clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


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
on_chayma_combobox_mdf_typ_changed     (GtkComboBox     *combobox,
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
{/*
GtkTreeIter  iter;
gchar *numlist;


GtkTreeModel *model = gtk_tree_view_get_model(treeview);

if (gtk_tree_model_get_iter(model,&iter,path)){
gtk_tree_model_get(GTK_LIST_STORE(model),&iter,0 , &numlist ,-1);
strcpy(Numlist,numlist); 
chayma_flag_edit = 0;
}*/
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
GtkWidget *chayma_window_mod;
GtkWidget *chayma_window_aff;
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
gtk_widget_destroy(chayma_window_aff);
chayma_window_mod=lookup_widget(button,"modifier_reclamation");
chayma_window_mod=create_modifier_reclamation();
gtk_widget_show(chayma_window_mod);
}


void
on_chayma_button_ls_sup_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *chayma_window_sup;
GtkWidget *chayma_window_aff;
chayma_window_aff=lookup_widget(button,"Liste_reclamation");
gtk_widget_destroy(chayma_window_aff);
chayma_window_sup=lookup_widget(button,"chayma_window_suprec");
chayma_window_sup=create_chayma_window_suprec();
gtk_widget_show(chayma_window_sup);
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
on_button_Esp_Admin_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_Esp_Vote_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_Esp_BV_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_Esp_Elec_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_espace_reclamation_buttun_clicked   (GtkButton       *button,
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
log_in=lookup_widget(button,"log_in");
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
on_chayma_combobox_aj_type_changed     (GtkComboBox     *combobox,
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

}


void
on_chayma_checkbutton_aj_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{

}

