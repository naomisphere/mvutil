#ifndef COMMANDS_H
#define COMMANDS_H

#include "../include/mvutil.h"

int do_mkdir(int argc, char *argv[]);
int do_touch(int argc, char *argv[]);
int do_rm(int argc, char *argv[]);
int do_rmdir(int argc, char *argv[]);
int do_get_sdsk(int argc, char *argv[]);
int do_set_sdsk(int argc, char *argv[]);

#endif