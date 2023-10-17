#ifndef __FSOFT_T_H__
#define __FSOFT_T_H__
#include <stdint.h>

typedef void (*fsoft_func)(char* cmd);
typedef struct fsoft_t {
    const char* cmd;
    fsoft_func func;
    const char* info;
} fsoft_t;

static void func_app(char* cmd);

static void func_embedded(char* cmd);
static void func_web(char* cmd);
static void func_game(char* cmd);
static void func_all(char* cmd);
#endif /* __FSOFT_T_H__ */