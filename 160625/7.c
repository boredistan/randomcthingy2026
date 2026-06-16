#include <stdio.h>

int main(void){
    int c;
    int nc;
    nc = 0;
    
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++nc ;
        }
       
    }
    

 printf("%d\n", nc );
    



    return 0;
}