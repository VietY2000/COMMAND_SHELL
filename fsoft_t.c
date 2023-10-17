#include "fsoft_t.h"
#include <stdio.h>


const fsoft_t fsoft_table[] = {
    /********************************************************************/
    /* fsoft command table */
    /********************************************************************/
    {(const char*)"app",        func_app,       (const char*)"APP:\t\t\t\t\t\tAPP_INFO"},
    {(const char*)"web",        func_web,       (const char*)"WEB:\t\t\t\t\t\tWEB_INFO"},
    {(const char*)"embedded",   func_embedded,  (const char*)"EMBEDDED:\t\t\t\t\tEMBEDDED_INFO"},
    {(const char*)"game",       func_game,      (const char*)"GAME:\t\t\t\t\t\tGAME_INFO"},

    {(const char*)"all",        func_all,       (const char*)"ALL:\t\t\t\t\t\tALL_INFO"},
    /* end of table */
    {(const char*)0, (fsoft_func)0, (const char*)0}
};
static void func_app(char* cmd){
    (void*)cmd;
    printf("\t\t  FSOFT_APP_DESCRIPTION\n");
    printf("Language:\t\t\t\t\tJava/Objective-C.\n");
    printf("Framework:\t\t\t\t\tQML.\n");

    printf("English:\t\t\t\t\tTOEIC 600.\n");
}    

static void func_embedded(char* cmd){
    (void*)cmd;
    printf("\t\t  FSOFT_EMBEDDED_DESCRIPTION\n");    
    printf("Language:\t\t\t\t\tAssembly/Matlab.\n");
    printf("Peripheral:\t\t\t\t\tTimer/Interrupt.\n");
    printf("Microcontroller:\t\t\t\tAduino Uno/STM32.\n");
    printf("English:\t\t\t\t\tIELTS 6.5.\n");
}

static void func_web(char* cmd){
    (void*)cmd;

    printf("\t\t  FSOFT_WEB_DESCRIPTION\n"); 
    printf("Language:\t\t\t\t\tJavaScript.\n");
    printf("Database:\t\t\t\t\tSQL/MySQL.\n");
    printf("English:\t\t\t\t\tTOEIC 600.\n");
    printf("Other:\t\t\t\t\t\tAdobe Photoshop.\n");
}

static void func_game(char* cmd){
    (void*)cmd;
    printf("\t\t  FSOFT_GAME_DESCRIPTION\n"); 

    printf("Language:\t\t\t\t\tC#/Python.\n");
    printf("Game Engine:\t\t\t\t\tUnreal.\n");
    printf("English:\t\t\t\t\tTOEIC 800.\n");

}

static void func_all(char* cmd){
    (void*)cmd;
    printf("\t\tFSOFT_JOB_DESCRIPTION\n");
    int index_func = 0;
    while(fsoft_table[index_func].cmd){
        printf("%s\n",fsoft_table[index_func].info);
        index_func++;
    }
}