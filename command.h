#ifndef __COMMAND_H__
#define __COMMAND_H__
#include <stdint.h>

#include "bosch_t.h"
#include "ftel_t.h"
#include "fsoft_t.h"
#include "vnpt_t.h"
#include "lg_t.h"

#define MAX_CMD_SIZE                    12
#define CMD_TABLE_NOT_FOUND             0

#define CMD_SUCCESS                     1
#define CMD_NOT_FOUND                   2
#define CMD_SPACE                       3
typedef uint8_t (*func_cmd_parser)(char* cmd);
typedef struct {
    const char *cmd; /* biến kt từ thứ 1 */
    func_cmd_parser func_parser; /* hàm thực thi lệnh của từ thứ 1 với đầu vào là từ thứ 2*/
    const char* info;
} cmd_line_t;

uint8_t cmd_line_parser(const cmd_line_t *cmd_table, char* cmd);
uint8_t bosch_parser(char *cmd);
uint8_t ftel_parser(char  *cmd);
uint8_t fsoft_parser(char *cmd);
uint8_t vnpt_parser(char* cmd);
uint8_t lg_parser(char* cmd);
uint8_t clear_parser(char* cmd);
uint8_t all_parser(char *cmd);
#endif /* __COMMAND_H__ */