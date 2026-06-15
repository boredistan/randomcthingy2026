#include <stdio.h>

int main(void){

    float celc, fahr;

    /* definitions of symbolic constants!*/
    #define STEP 20
    #define UPPER 300
    #define LOWER 0



    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP ){

        printf("%3.0f\t\t%3.2f\n", fahr, (5.0 * (fahr-32.0))/9.0);


    }




}