//implementation of that word split exercise hopefully without bug

#include <stdio.h>

#define IN 1
#define OUT 0
#define encounterTrue 1
#define encounterFalse 0
int main(void){

    int encounter, c, state;
    state = OUT;
    encounter = encounterFalse;

    while((c=getchar())!= EOF){
        if ((c == ' '|| c == '\n'|| c == '\t') && encounter == encounterFalse){
          printf("\n");
          encounter = encounterTrue;          
            
        }
        else if ((c == ' '|| c == '\n'|| c == '\t') && encounter == encounterTrue){     
        }
        else{
            putchar(c);
            encounter = encounterFalse;
        }       
    }
    return 0;
}