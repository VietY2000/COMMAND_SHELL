#include <stdio.h>
#include "command.h"
#include <string.h>

#include <stdlib.h>
#define path "E:\\Company\\job:"
extern const cmd_line_t lgn_cmd_table[];
int main(){
    system("cls");
    printf("\n");
    while(1) {
        printf(path);

        char cmd[100];
        fgets(cmd,sizeof(cmd),stdin);
        if(strcmp(cmd,"0xFF\n") == 0 || strcmp(cmd,"0xff\n") == 0){
            break;
        }
        uint8_t state = cmd_line_parser(lgn_cmd_table, cmd);
        switch(state){
            case (CMD_SUCCESS):
                break;
                
            case (CMD_SPACE):
                break;
            case (CMD_NOT_FOUND):
                printf("CMD_NOT_FOUND\n");
                break;
            case (CMD_TABLE_NOT_FOUND):
                printf("CMD_TABLE_NOT_FOUND\n");
                break;
            default:
                break;
        }
    }
    return 0;
}