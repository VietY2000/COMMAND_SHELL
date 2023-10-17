#include "command.h"
#include <string.h>
#include <stdio.h>

#include <stdlib.h>
/*thêm các biến từ các file khác để dùng */
extern const bosch_t bosch_table[];
extern const ftel_t ftel_table[];
extern const fsoft_t fsoft_table[];
extern const vnpt_t vnpt_table[];
extern const lg_t lg_table[];


/****************************************************************************************/
/* command table */
/****************************************************************************************/
const cmd_line_t lgn_cmd_table[] = {
    {(const char*)"bosch",      bosch_parser,       (const char*)"BOSCH .....:\t\tBOSCH_JOB."},
    {(const char*)"ftel",       ftel_parser,        (const char*)"FTEL  .....:\t\tFTEL_JOB."},
    {(const char*)"fsoft",      fsoft_parser,       (const char*)"FSOFT .....:\t\tFSOFT_JOB."},
    {(const char*)"vnpt",       vnpt_parser,        (const char*)"VNPT  .....:\t\tVNPT_JOB."},
    {(const char*)"lg",         lg_parser,          (const char*)"LG    .....:\t\tLG_JOB"},

    {(const char*)"clear",      clear_parser,       (const char*)"CLEAR      :\t\tCLEAR_CONSOLE."},
    {(const char*)"all",        all_parser,         (const char*)"ALL        :\t\tALL_COMPANY_JOB."},
    /* end of table */
    {(const char*)0, (func_cmd_parser)0, (const char*)0}
};
uint8_t cmd_line_parser(const cmd_line_t *cmd_table, char* cmd){
    char p_cmd[2][12];
    int index_cmd = 0;
    int p = 0;
    int pos; 
    int symbol = 1;
    while(*(cmd + p)){
        if((*(cmd + p) == ' ' || *(cmd + p) == '\n')){
            if(symbol == 0){

                *(p_cmd[index_cmd] + ( p - pos)) = '\0';
                index_cmd++;
                symbol = 1;
            }
        }
        else{
            if(symbol == 1){
                pos = p;

            }
            if(index_cmd >= 2){
                return CMD_NOT_FOUND;

            }
            p_cmd[index_cmd][p - pos] = *(cmd + p);
            symbol = 0;

        }
        p++;
    }

    // if(index_cmd < 2){
        if(index_cmd == 0){
            return CMD_SPACE;
        }
        // return CMD_NOT_FOUND;
    // }

    uint8_t result;
    int table_index = 0;
    while(cmd_table[table_index].cmd){
        if(strcmp(cmd_table[table_index].cmd, p_cmd[0]) == 0){
            result = cmd_table[table_index].func_parser(p_cmd[1]);
        }
        table_index++;
    }
    return result;
}

uint8_t bosch_parser(char *cmd){
    int index = 0;
    while(bosch_table[index].cmd){
        if(strcmp(bosch_table[index].cmd, cmd) == 0){
            bosch_table[index].func(cmd);
            return CMD_SUCCESS;
        }
        index++;
    }
    return CMD_NOT_FOUND;
}

uint8_t ftel_parser(char  *cmd){
    int index = 0;
    while(ftel_table[index].cmd){
        if(strcmp(ftel_table[index].cmd, cmd) == 0){
            ftel_table[index].func(cmd);
            return CMD_SUCCESS;
        }
        index++;
    }
    
    return CMD_NOT_FOUND;
}


uint8_t fsoft_parser(char *cmd){
    int index = 0;
    while(fsoft_table[index].cmd){
        if(strcmp(fsoft_table[index].cmd, cmd) == 0){
            fsoft_table[index].func(cmd);
            return CMD_SUCCESS;
        }
        index++;
    }
    return CMD_NOT_FOUND;
}




uint8_t vnpt_parser(char* cmd){
    int index = 0;
    while(vnpt_table[index].cmd){
        if(strcmp(vnpt_table[index].cmd, cmd) == 0){
            vnpt_table[index].func(cmd);
            return CMD_SUCCESS;

        }
        index++;
    }
    return CMD_NOT_FOUND;
}

uint8_t lg_parser(char* cmd){
    int index = 0;
    while(lg_table[index].cmd){
        if(strcmp(lg_table[index].cmd, cmd) == 0){
            lg_table[index].func(cmd);
            return CMD_SUCCESS;
        }
        index++;
    }
    return CMD_NOT_FOUND;
}

uint8_t clear_parser(char* cmd){
    (void*)cmd;
    system("cls");
    return CMD_SUCCESS;
}

uint8_t all_parser(char* cmd){
    (void*)cmd;
    int index_table = 0;

    while(lgn_cmd_table[index_table].cmd){
        printf("%s\n",lgn_cmd_table[index_table].info);
        index_table++;
    }
    return CMD_SUCCESS;
}