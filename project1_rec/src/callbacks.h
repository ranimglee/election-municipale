#include <gtk/gtk.h>


void
on_chayma_button_supconf_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_radiobutton_supoui_toggled   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_radiobutton_supnon_toggled   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_button_md_ret_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_md_conf_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_checkbutton_mdf_activate     (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_treeview_row_activated       (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_chayma_button_ls_actualiser_clicked (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_ls_recherche_clicked  (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_radiobutton_ls_NumBV_toggled (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_radiobutton_ls_obj_toggled   (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_chayma_radiobutton_ls_type_toggled  (GtkToggleButton *togglebutton,
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
on_chayma_button_ls_dec_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_stat_gag_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_stat_rec_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_Esp_Elec_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_Esp_Admin_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_Esp_Vote_clicked             (GtkButton       *button,
                                        gpointer         user_data);

void
on_button_Esp_BV_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_espace_reclamation_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data);

void
on_reclamation_button_con_clicked      (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_spinbutton_aj_NumBV_changed  (GtkEditable     *editable,
                                        gpointer         user_data);

void
on_chayma_button_aj_ret_clicked        (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_button_aj_conf_clicked       (GtkButton       *button,
                                        gpointer         user_data);

void
on_chayma_checkbutton_aj_activate      (GtkButton       *button,
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
on_chayma_combobox_mdf_typ_changed     (GtkComboBox     *combobox,
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
on_chayma_entry_ls_numlist_insert_text (GtkEditable     *editable,
                                        gchar           *new_text,
                                        gint             new_text_length,
                                        gpointer         position,
                                        gpointer         user_data);

void
on_chayma_radiobutton_ls_Etat_toggled  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_espace_reclamation_buttun_clicked   (GtkButton       *button,
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
on_chayma_combobox_aj_type_changed     (GtkComboBox     *combobox,
                                        gpointer         user_data);

void
on_chayma_combobox_aj_etat_changed     (GtkComboBox     *combobox,
                                        gpointer         user_data);
