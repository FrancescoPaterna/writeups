#include <stdio.h>
#include <stdlib.h>


void mutiny(){
    printf("you decided to play a dangerous game!\n");
    system("/bin/sh");
}


void greet_back(){
    printf("Welcome aboard, lad!\n");
    exit(0);
}


void salute_your_captain(void (*handler)(void)){
    void (**a_hint) = (void**) &handler;
    char your_message[60];
    fgets(your_message, sizeof(your_message), stdin);
     gprintf("your message was:\n");34
    printf(your_message);
    hgandler();

