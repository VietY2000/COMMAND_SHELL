#include "vnpt_t.h"
#include <stdio.h>


const vnpt_t vnpt_table[] = {
    /********************************************************************/
    /* vnpt command table */
    /********************************************************************/
    {(const char*)"app",        func_app,       (const char*)"APP:\t\t\t\t\t\tAPP_INFO"},
    {(const char*)"web",        func_web,       (const char*)"WEB:\t\t\t\t\t\tWEB_INFO"},
    {(const char*)"embedded",   func_embedded,  (const char*)"EMBEDDED:\t\t\t\t\tEMBEDDED_INFO"},
    {(const char*)"game",       func_game,      (const char*)"GAME:\t\t\t\t\t\tGAME_INFO"},

    {(const char*)"all",        func_all,       (const char*)"ALL:\t\t\t\t\t\tALL_INFO"},
    /* end of table */
    {(const char*)0, (vnpt_func)0, (const char*)0}
};
static void func_app(char* cmd){
    (void*)cmd;
    printf("\t\t  VNPT_APP_DESCRIPTION\n");
    printf("Language:\t\t\t\t\tObjective-C/Kotlin.\n");
    printf("Framework:\t\t\t\t\tQT.\n");

    printf("English:\t\t\t\t\tTOEIC 550.\n");
}    

static void func_embedded(char* cmd){
    (void*)cmd;
    printf("\t\t  VNPT_EMBEDDED_DESCRIPTION\n");    
    printf("Language:\t\t\t\t\tC/Matlab.\n");
    printf("Peripheral:\t\t\t\t\tGPIO/UART.\n");
    printf("Microcontroller:\t\t\t\tESP32/Jeston Nano.\n");
    printf("English:\t\t\t\t\tTOEIC 650.\n");
}

static void func_web(char* cmd){
    (void*)cmd;

    printf("\t\t  VNPT_WEB_DESCRIPTION\n"); 
    printf("Language:\t\t\t\t\tHTML/Ruby.\n");
    printf("Database:\t\t\t\t\tMySQL.\n");
    printf("English:\t\t\t\t\tTOEIC 900.\n");
    printf("Other:\t\t\t\t\t\tAdobe Photoshop.\n");
}

static void func_game(char* cmd){
    (void*)cmd;
    printf("\t\t  VNPT_GAME_DESCRIPTION\n"); 

    printf("Language:\t\t\t\t\tC#/C++.\n");
    printf("Game Engine:\t\t\t\t\tUnreal/Unity.\n");
    printf("English:\t\t\t\t\tTOEIC 500.\n");

}

static void func_all(char* cmd){
    (void*)cmd;
    printf("\t\tVNPT_JOB_DESCRIPTION\n");
    int index_func = 0;
    while(vnpt_table[index_func].cmd){
        printf("%s\n",vnpt_table[index_func].info);
        index_func++;
    }
}