/*
 * $Log: xinfo.h,v $
 * Revision 1.4  2000/04/20 05:31:32  krishna
 * Added headers.
 *
 * Revision 1.3  1998/07/17  08:05:16  krishna
 * Added RCS header
 *
 */

#ifndef XINFO_H
#define XINFO_H

#include <stdio.h>
#include <math.h>
#include <time.h>

#include <gtk/gtk.h>
#include <gtk/gtkx.h>

/*
 * All X windows used for graphics need one of these
 */ 

typedef struct INFO { 
    GtkWidget *screen;
    int screen_num;
    GtkWidget *display;
    GtkWidget *gc;
    GtkWidget *win;
    GtkWidget *cmap;
    GdkColor color[10];   /* use 2-9 until .freq changes */
    GtkWidget *pixmap;      /* background of every grapics window */
    GtkWidget *font;
 } INFO;
void setupcmap(GtkWidget *, INFO *);
#endif /* XINFO_H */