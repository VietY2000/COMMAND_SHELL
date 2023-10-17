#include "bosch_t.h"
#include <stdio.h>


const bosch_t bosch_table[] = {
    /********************************************************************/
    /* bosch command table */
    /********************************************************************/
    {(const char*)"app",        func_app,       (const char*)"APP:\t\t\t\t\t\tAPP_INFO"},
    {(const char*)"web",        func_web,       (const char*)"WEB:\t\t\t\t\t\tWEB_INFO"},
    {(const char*)"embedded",   func_embedded,  (const char*)"EMBEDDED:\t\t\t\t\tEMBEDDED_INFO"},
    {(const char*)"game",       func_game,      (const char*)"GAME:\t\t\t\t\t\tGAME_INFO"},

    {(const char*)"all",        func_all,       (const char*)"ALL:\t\t\t\t\t\tALL_INFO"},
    /* end of table */
    {(const char*)0, (bosch_func)0, (const char*)0}
};
static void func_app(char* cmd){
    (void*)cmd;
    printf("\t\t  BOSCH_APP_DESCRIPTION\n");
    printf("Language:\t\t\t\t\tKotlin/Java.\n");
    printf("Framework:\t\t\t\t\tQT.\n");

    printf("English:\t\t\t\t\tGood.\n");
}    

static void func_embedded(char* cmd){
    (void*)cmd;
    printf("\t\t  BOSCH_EMBEDDED_DESCRIPTION\n");    
    printf("Language:\t\t\t\t\tC/C++.\n");
    printf("Peripheral:\t\t\t\t\tUART/SPI.\n");
    printf("Microcontroller:\t\t\t\tRaspberry Pi.\n");
    printf("English:\t\t\t\t\tTOEIC 650.\n");
}

static void func_web(char* cmd){
    (void*)cmd;

    printf("\t\t  BOSCH_WEB_DESCRIPTION\n"); 
    printf("Language:\t\t\t\t\tJava.\n");
    printf("Databse:\t\t\t\t\tMySQL.\n");
    printf("English:\t\t\t\t\tTOEIC 600.\n");
    printf("Other:\t\t\t\t\t\tAdobe Photoshop.\n");
}

static void func_game(char* cmd){
    (void*)cmd;
    printf("\t\t  BOSCH_GAME_DESCRIPTION\n"); 

    printf("Language:\t\t\t\t\tC++.\n");
    printf("Game Engine:\t\t\t\t\tUnity.\n");
    printf("English:\t\t\t\t\tTOEIC 550.\n");

}

static void func_all(char* cmd){
    (void*)cmd;
    printf("\t\t  BOSCH_JOB_DESCRIPTION\n");
    int index_func = 0;
    while(bosch_table[index_func].cmd){
        printf("%s\n",bosch_table[index_func].info);
        index_func++;
    }
}