#include "ftel_t.h"
#include <stdio.h>


const ftel_t ftel_table[] = {
    /********************************************************************/
    /* ftel command table */
    /********************************************************************/
    {(const char*)"app",        func_app,       (const char*)"APP:\t\t\t\t\t\tAPP_INFO"},
    {(const char*)"web",        func_web,       (const char*)"WEB:\t\t\t\t\t\tWEB_INFO"},
    {(const char*)"embedded",   func_embedded,  (const char*)"EMBEDDED:\t\t\t\t\tEMBEDDED_INFO"},
    {(const char*)"game",       func_game,      (const char*)"GAME:\t\t\t\t\t\tGAME_INFO"},

    {(const char*)"all",        func_all,       (const char*)"ALL:\t\t\t\t\t\tALL_INFO"},
    /* end of table */
    {(const char*)0, (ftel_func)0, (const char*)0}
};
static void func_app(char* cmd){
    (void*)cmd;
    printf("\t\t  FTEL_APP_DESCRIPTION\n");
    printf("Language:\t\t\t\t\tSwift/Objective-C.\n");
    printf("Framework:\t\t\t\t\tQT/QML.\n");

    printf("English:\t\t\t\t\tTOEIC 700.\n");
}    

static void func_embedded(char* cmd){
    (void*)cmd;
    printf("\t\t  FTEL_EMBEDDED_DESCRIPTION\n");    
    printf("Language:\t\t\t\t\tC/C++/Assembly.\n");
    printf("Peripheral:\t\t\t\t\tUART/SPI/I2C.\n");
    printf("Microcontroller:\t\t\t\tRaspberry Pi/STM32.\n");
    printf("English:\t\t\t\t\tIELTS 9.0.\n");
}

static void func_web(char* cmd){
    (void*)cmd;

    printf("\t\t  FTEL_WEB_DESCRIPTION\n"); 
    printf("Language:\t\t\t\t\tJavaScript.\n");
    printf("Database:\t\t\t\t\tSQL/MySQL.\n");
    printf("English:\t\t\t\t\tTOEIC 600.\n");
    printf("Other:\t\t\t\t\t\tAdobe Photoshop.\n");
}

static void func_game(char* cmd){
    (void*)cmd;
    printf("\t\t  FTEL_GAME_DESCRIPTION\n"); 

    printf("Language:\t\t\t\t\tC++/Python.\n");
    printf("Game Engine:\t\t\t\t\tUnity/Unreal.\n");
    printf("English:\t\t\t\t\tTOEIC 700.\n");

}

static void func_all(char* cmd){
    (void*)cmd;
    printf("\t\tFTEL_JOB_DESCRIPTION\n");
    int index_func = 0;
    while(ftel_table[index_func].cmd){
        printf("%s\n",ftel_table[index_func].info);
        index_func++;
    }
}