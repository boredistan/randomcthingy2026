#include <stdio.h>

int main(void){

    int c;

    c = getchar();

    
    while (c != EOF){
        printf("MEOW");
        putchar(c);
        c = getchar();
    }
    


    



    return 0;
}