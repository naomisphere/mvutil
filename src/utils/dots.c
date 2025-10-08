#include "utils.h"
#include <unistd.h>
#include <pthread.h>

static pthread_t dot_thread;
static int dot_anim_run = 0;

void* dot_ns_worker(void* arg) {
    while (dot_anim_run) {
        usleep(100000);
        printf(".");
        fflush(stdout);
    }
    return NULL;
}

// indentation chaos!!!!!!!
void start_wait_dots_anim(void) {
    dot_anim_run = 1;
        pthread_create(&dot_thread, NULL, dot_ns_worker, NULL);
}

void stop_wait_dots_anim(void) {
    dot_anim_run = 0;
        pthread_join(dot_thread, NULL);
    printf("\n");
}