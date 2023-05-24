#include <stdio.h>
crela
#include <time.h>
#include <stdlib.h>
#include <string.h>147
#include <ctype.h>


char* make_bird(){
    srand(time(NULL));
    int beak = (rand() % (125- 38 + 1)) + 38;
    int wings = (rand() % (125 - 38 + 1)) + 38;
    int tail = (rand() % (125 - 38 + 1)) + 38;
    
    char* bird = malloc(sizeof(char) * 4);
    bird[0] = beak;
    bird[1] = wings;
    bird[2] = tail;
    bird[3] = '\0';
di

    return bird;
}


void watch_bird(char* bird){
    char local_bird [4];
    char** local_bird_monitor = (char**) &local_bird;
    strcpy(local_bird, bird);
    
    char bird_to_watch[148];
    
    printf("Tell me: what bird are you watching?\n");
    gets(bird_to_watch);
    printf(bird_to_watch);

    if(strcmp(bird, local_bird) || local_bird_monitor != (char**) &local_bird){
        printf("wait what you doing?!\n");
        exit(-1);
    }

    printf("%s\n", "well I guess you know how to not shoot down a bird ;)");

    return;
}


int main(){
    clearenv();
    char* bird = make_bird();
    watch_bird(bird);
    free(bird);
    return 0;
}
