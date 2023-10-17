#ifndef __BOSCH_T_H__
#define __BOSCH_T_H__
#include <stdint.h>

typedef void (*bosch_func)(char* cmd);
typedef struct bosch_t {
    const char* cmd;
    bosch_func func;
    const char* info;
} bosch_t;

static void func_app(char* cmd);

static void func_embedded(char* cmd);
static void func_web(char* cmd);
static void func_game(char* cmd);
static void func_all(char* cmd);
#endif /* __BOSCH_T_H__ */