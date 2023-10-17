#ifndef __LG_T_H__
#define __LG_T_H__
#include <stdint.h>

typedef void (*lg_func)(char *cmd);
typedef struct lg_t {
    const char* cmd;
    lg_func func;
    const char* info;
} lg_t;

static void func_app(char* cmd);

static void func_embedded(char* cmd);
static void func_web(char* cmd);
static void func_game(char* cmd);
static void func_all(char* cmd);
#endif /* __LG_T_H__ */