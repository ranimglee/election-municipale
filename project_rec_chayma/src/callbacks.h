#include <gtk/gtk.h>


gboolean
on_modier_reclamation_focus_in_event   (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data);

void
on_chayma_entry_mdf_id_insert_text     (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_chayma_entry_mdf_listele_insert_text
                                        (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_chayma_spinbutton_mdf_NumBV_changed (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_chayma_combobox_mdf_etat_changed    (GtkComboBox     *combobox,
                                        gpointer         user_data);

void
on_chayma_button_mdf_re_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_mdf_conf_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_checkbutton_mdf_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_entry_mdf_msg_insert_text    (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_chayma_combobox_mdf_typ_changed     (GtkComboBox     *combobox,
                                        gpointer         user_data);

gboolean
on_Liste_reclamation_focus_in_event    (GtkWidget       *widget,
                                        GdkEventFocus   *event,
                                        gpointer         user_data);

void
on_chayma_treeview_row_activated       (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_chayma_entry_ls_numlist_insert_text (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_chayma_button_ls_recherche_clicked  (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_ls_actualiser_clicked (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_ls_dec_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_ls_ajout_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_ls_mdf_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_ls_sup_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_stat_rec_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_radiobutton_ls_type_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_radiobutton_ls_Etat_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_button_stat_gag_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_ident_log_in_insert_text            (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_mdp_log_in_insert_text              (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_connecter_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_entry_aj_id_insert_text      (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_chayma_entry_aj_listelec_insert_text
                                        (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_chayma_spinbutton_aj_NumBV_changed  (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_chayma_combobox_aj_etat_changed     (GtkComboBox     *combobox,
                                        gpointer         user_data);

void
on_chayma_button_aj_ret_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_aj_conf_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_checkbutton_aj_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_combobox_aj_type_changed     (GtkComboBox     *combobox,
                                        gpointer         user_data);

void
on_chayma_entry_aj_msg_insert_text     (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_chayma_radiobutton_sup_rec_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_radiobutton_sup_non_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_button_conf_suprec_clicked   (GtkButton       *button,
                                        gpointer         user_data);
