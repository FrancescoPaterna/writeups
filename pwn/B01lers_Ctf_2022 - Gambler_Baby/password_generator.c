#include <iostream>
#include <string.h>


int main() {
    char str[4000];
    int i,j ;
    int a;
    j = 0;
    for(i=0; i<4000; i++) {
        a = rand();
        str[i] = a + a/ 26 * (-26) + 'a';
        printf("%c", str[i]);
        j++;

        // just add a char ever correct 4 letters, the code need one any key to go on
        if(j%4 == 0) {
            printf("a");
        }
        //
    }
}
