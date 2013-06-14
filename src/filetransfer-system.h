/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * filetransfer-system.h
 * Copyright (C) 2013 german <german.andres.moreno@gmail.com>
 * 
 * filetransfer-system is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * filetransfer-system is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _FILETRANSFER_SYSTEM_
#define _FILETRANSFER_SYSTEM_

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define FILETRANSFER_SYSTEM_TYPE_APPLICATION             (filetransfer_system_get_type ())
#define FILETRANSFER_SYSTEM_APPLICATION(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), FILETRANSFER_SYSTEM_TYPE_APPLICATION, Filetransfersystem))
#define FILETRANSFER_SYSTEM_APPLICATION_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), FILETRANSFER_SYSTEM_TYPE_APPLICATION, FiletransfersystemClass))
#define FILETRANSFER_SYSTEM_IS_APPLICATION(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FILETRANSFER_SYSTEM_TYPE_APPLICATION))
#define FILETRANSFER_SYSTEM_IS_APPLICATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), FILETRANSFER_SYSTEM_TYPE_APPLICATION))
#define FILETRANSFER_SYSTEM_APPLICATION_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), FILETRANSFER_SYSTEM_TYPE_APPLICATION, FiletransfersystemClass))

typedef struct _FiletransfersystemClass FiletransfersystemClass;
typedef struct _Filetransfersystem Filetransfersystem;
typedef struct _FiletransfersystemPrivate FiletransfersystemPrivate;

struct _FiletransfersystemClass
{
	GtkApplicationClass parent_class;
};

struct _Filetransfersystem
{
	GtkApplication parent_instance;

	FiletransfersystemPrivate *priv;

};

GType filetransfer_system_get_type (void) G_GNUC_CONST;
Filetransfersystem *filetransfer_system_new (void);

/* Callbacks */

G_END_DECLS

#endif /* _APPLICATION_H_ */

void on_buttonParar_clicked (GtkButton *button, gpointer user_data);

void on_buttonEnviar_clicked (GtkButton *button, gpointer user_data);

void on_comboboxTipo_changed (GtkComboBox *combobox, gpointer user_data);

