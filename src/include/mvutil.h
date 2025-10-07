#ifndef MVUTIL_H
#define MVUTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/mount.h>

#define BF_MAX_PATH_LENGTH 1024
#define BF_MAX_CMD_LENGTH 2048
#define ANIM_DOT_INTERVAL 500000

extern int verbose_mode;
extern int force_mode;

#define LOG_ERROR(fmt, ...) fprintf(stderr, "mvutil: " fmt "\n", ##__VA_ARGS__)
#define LOG_VERBOSE(fmt, ...) if (verbose_mode) printf("mvutil: " fmt "\n", ##__VA_ARGS__)
#define LOG_INFO(fmt, ...) printf("mvutil: " fmt "\n", ##__VA_ARGS__)

void print_usage(const char* MVUTIL_ID);

#endif