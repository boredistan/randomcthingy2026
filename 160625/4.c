#include <stdio.h>

int main(void){

    float celc, fahr;
    int step=20, lower=0, upper=300;


    for(fahr = 300.0; fahr >= 0; fahr = fahr - 20){

        printf("%3.0f\t\t%3.2f\n", fahr, (5.0 * (fahr-32.0))/9.0);


    }




}