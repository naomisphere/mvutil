#ifndef UTILS_H
#define UTILS_H

#include "../include/mvutil.h"

int find_osx_disk(char* disk_id, size_t size);
int mount_osx_apfs(const char* disk, const char* mount_point);
int bless_volume(const char* mount_point);

void start_wait_dots_anim(void);
void stop_wait_dots_anim(void);

#endif