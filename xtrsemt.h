/* xtrsemt.h -- Misosys C interface to xtrs emulator traps */
/* Copyright (c) 1997, Timothy Mann */

/* This software may be copied, modified, and used for any purpose
 * without fee, provided that (1) the above copyright notice is
 * retained, and (2) modified versions are clearly marked as having
 * been modified, with the modifier's name and the date included.  */

/* Last modified on Sat Sep 20 13:51:37 PDT 1997 by mann */

#ifndef _TIME_T
#include <time.h>
#endif

extern int emt_open(/* char *fname, int oflag, int mode */);
extern int emt_close(/* int fd */);
extern int emt_read(/* int fd, char *buffer, int bytes */);
extern int emt_write(/* int fd, char *buffer, int bytes */);
extern long emt_lseek(/* int fd, long offset, int whence */);
extern int emt_strerror(/* int err, char *buffer, int size */);
extern time_t emt_time(/* int local */);
extern int emt_dopen(/* char *fname */);
extern int emt_dclose(/* int dirfd */);
extern int emt_dread(/* int dirfd, char *buffer, int bytes */);
extern int emt_chdir(/* char *fname */);
extern int emt_getcwd(/* char *buffer, int bytes */);
extern void emt_misc(/* int func */);

#define EMT_TIME_GMT 0
#define EMT_TIME_LOCAL 1

#define EMT_MISC_DISK_CHANGE 0
#define EMT_MISC_EXIT 1
#define EMT_MISC_DEBUG 2
#define EMT_MISC_RESET_BUTTON 3
