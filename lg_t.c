#include "lg_t.h"
#include <stdio.h>


const lg_t lg_table[] = {
    /********************************************************************/
    /* lg command table */
    /********************************************************************/
    {(const char*)"app",        func_app,       (const char*)"APP:\t\t\t\t\t\tAPP_INFO"},
    {(const char*)"web",        func_web,       (const char*)"WEB:\t\t\t\t\t\tWEB_INFO"},
    {(const char*)"embedded",   func_embedded,  (const char*)"EMBEDDED:\t\t\t\t\tEMBEDDED_INFO"},
    {(const char*)"game",       func_game,      (const char*)"GAME:\t\t\t\t\t\tGAME_INFO"},

    {(const char*)"all",        func_all,       (const char*)"ALL:\t\t\t\t\t\tALL_INFO"},
    /* end of table */
    {(const char*)0, (lg_func)0, (const char*)0}
};
static void func_app(char* cmd){
    (void*)cmd;
    printf("\t\t  LG_APP_DESCRIPTION\n");
    printf("Language:\t\t\t\t\tObjective-C/Kotlin/Java.\n");
    printf("Framework:\t\t\t\t\tQT/QML.\n");

    printf("English:\t\t\t\t\tTOEIC 950.\n");
}    

static void func_embedded(char* cmd){
    (void*)cmd;
    printf("\t\t  LG_EMBEDDED_DESCRIPTION\n");    
    printf("Language:\t\t\t\t\tC/C++/Matlab.\n");
    printf("Peripheral:\t\t\t\t\tGPIO/UART/I2C/SPI.\n");
    printf("Microcontroller:\t\t\t\t\tESP32/Jeston Nano/STM32.\n");
    printf("English:\t\t\t\t\tTOEIC 900.\n");
}

static void func_web(char* cmd){
    (void*)cmd;

    printf("\t\t  LG_WEB_DESCRIPTION\n"); 
    printf("Language:\t\t\t\t\tHTML/Ruby/Java.\n");
    printf("Database:\t\t\t\t\tSQL/MySQL.\n");
    printf("English:\t\t\t\t\tTOEIC 900.\n");
    printf("Other:\t\t\t\t\tAdobe Photoshop.\n");
}

static void func_game(char* cmd){
    (void*)cmd;
    printf("\t\t  LG_GAME_DESCRIPTION\n"); 

    printf("Language:\t\t\t\t\tC#/C++/Python.\n");
    printf("Game Engine:\t\t\t\t\tUnreal/Unity.\n");
    printf("English:\t\t\t\t\tTOEIC 850.\n");

}

static void func_all(char* cmd){
    (void*)cmd;
    printf("\t\tLG_JOB_DESCRIPTION\n");
    int index_func = 0;
    while(lg_table[index_func].cmd){
        printf("%s\n",lg_table[index_func].info);
        index_func++;
    }
}