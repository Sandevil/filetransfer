## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src 

filetransfer_systemdocdir = ${prefix}/doc/filetransfer_system
filetransfer_systemdoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS


EXTRA_DIST = $(filetransfer_systemdoc_DATA)


# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(filetransfer_systemdocdir)
