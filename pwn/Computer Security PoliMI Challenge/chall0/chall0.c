#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char data[100];

void executeorder(){
    system("cat flag");
    return;
}

int main(int argc, char *argv[]){
    char buffer[8];
    int shortmagicnumber = (1596 | 0x01010101);

    setvbuf(stdin,0,2,0);
    setvbuf(stderr,0,2,0);
    setvbuf(stdout,0,2,0);

    printf("Knock knock...\n Secret password?...\n");
    gets(data);

    if (strncmp((char*)&shortmagicnumber, data,4) == 0){
        printf("Nice, you got in!");
        strcpy(buffer, data);
    }
    else{
        printf("Ouch, that was not the correct magic number! \n");
    }

    return 0;
}
