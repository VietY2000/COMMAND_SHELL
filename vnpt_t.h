#ifndef __VNPT_T_H__
#define __VNPT_T_H__
#include <stdint.h>

typedef void (*vnpt_func)(char *cmd);
typedef struct vnpt_t {
    const char* cmd;
    vnpt_func func;
    const char* info;
} vnpt_t;

static void func_app(char* cmd);

static void func_embedded(char* cmd);
static void func_web(char* cmd);
static void func_game(char* cmd);
static void func_all(char* cmd);
#endif /* __VNPT_T_H__ */