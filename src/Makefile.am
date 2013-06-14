## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(pkgdatadir)/ui
ui_DATA = filetransfer_system.ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(FILETRANSFER_SYSTEM_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = filetransfer_system

filetransfer_system_SOURCES = \
	main.c \
	filetransfer-system.h \
	filetransfer-system.c	

filetransfer_system_LDFLAGS = \
	-Wl,--export-dynamic

filetransfer_system_LDADD = $(FILETRANSFER_SYSTEM_LIBS)


EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(pkgdatadir)

