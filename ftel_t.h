#ifndef __FTEL_T_H__
#define __FTEL_T_H__
#include <stdint.h>

typedef void (*ftel_func)(char* cmd);
typedef struct ftel_t {
    const char* cmd;
    ftel_func func;
    const char* info;
} ftel_t;

static void func_app(char* cmd);

static void func_embedded(char* cmd);
static void func_web(char* cmd);
static void func_game(char* cmd);
static void func_all(char* cmd);
#endif /* __FTEL_T_H__ */