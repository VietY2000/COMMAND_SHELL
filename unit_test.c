#include <stdio.h>
#include <string.h>
#include "command.h"

extern const cmd_line_t lgn_cmd_table[];

int main(){
    char cmd[100] = "fsoft app\n";
    printf("test \"fsoft app\"\n");
    uint8_t result = cmd_line_parser(lgn_cmd_table, cmd);
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"fsoft     app\n");
    printf("test \"fsoft_____app\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:

            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    strcpy(cmd,"fsoft  app  \n");
    printf("test \"fsoft__app__\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    strcpy(cmd,"  fsoft  app  \n");
    printf("test \"__fsoft__app__\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"  fsoft  app\n");
    printf("test \"__fsoft__app\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;




        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;

    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"  fsoft app\n");
    printf("test \"__fsoft app\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"fsoft\n");
   
    printf("test \"fsoft\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);
    switch(result){

        case (CMD_NOT_FOUND):
            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"fsoft   \n");
    printf("test \"fsoft_____\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"     fsoft\n");

    printf("test \"_____fsoft\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"          \n");
    printf("test \"_________\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"\n");
    printf("test \"Enter\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;

        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;

        case (CMD_TABLE_NOT_FOUND):
            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    strcpy(cmd,"bosch embedded\n");
    printf("test \"bosch embedded\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"vnpt web\n");
    printf("test \"vnpt web\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"ftel embedded\n");
    printf("test \"ftel embedded\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"lg all\n");
    printf("test \"lg all\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }

    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"fsoft app web\n");\
    printf("test \"fsoft app web\"\n");
    
    result = cmd_line_parser(lgn_cmd_table, cmd);
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"lg game\n");
    printf("test \"lg game\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"lgp game\n");
    printf("test \"lgp game\"\n");
    result = cmd_line_parser(lgn_cmd_table, cmd);    
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    strcpy(cmd,"lg gamep\n");

    result = cmd_line_parser(lgn_cmd_table, cmd);
    printf("test \"lg gamep\"\n");
    switch(result){
        case (CMD_NOT_FOUND):

            printf("cmd not found\n");
            break;
        case (CMD_SPACE):
            printf("cmd space\n");
            break;
        case (CMD_SUCCESS):
            printf("cmd success\n");
            break;
        case (CMD_TABLE_NOT_FOUND):

            printf("cmd table not found\n");
            break;
        default:
            break;
    }
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}