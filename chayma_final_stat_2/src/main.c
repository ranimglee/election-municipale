/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *modifier_reclamation;
  GtkWidget *Liste_reclamation;
  GtkWidget *Log_in;
  GtkWidget *ajouter_reclamation;
  GtkWidget *chayma_window_suprec;
  GtkWidget *window_chayma_stat_nb_rec;
  GtkWidget *window_chayma_stat_gagnant;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory ("/home/chayma/Desktop/chayma_final_stat/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  modifier_reclamation = create_modifier_reclamation ();
  gtk_widget_show (modifier_reclamation);
  Liste_reclamation = create_Liste_reclamation ();
  gtk_widget_show (Liste_reclamation);
  Log_in = create_Log_in ();
  gtk_widget_show (Log_in);
  ajouter_reclamation = create_ajouter_reclamation ();
  gtk_widget_show (ajouter_reclamation);
  chayma_window_suprec = create_chayma_window_suprec ();
  gtk_widget_show (chayma_window_suprec);
  window_chayma_stat_nb_rec = create_window_chayma_stat_nb_rec ();
  gtk_widget_show (window_chayma_stat_nb_rec);
  window_chayma_stat_gagnant = create_window_chayma_stat_gagnant ();
  gtk_widget_show (window_chayma_stat_gagnant);

  gtk_main ();
  return 0;
}

