#include <stdio.h>

int main(void){

    float fahr, celcius; 
    int step, lower, upper;

    step = 20;
    lower = 0;
    upper = 300;

    fahr = lower;

    while(fahr <= upper){
        printf("Fahrenheit\tCelcius\n");
        celcius = (5.0 * (fahr-32.0))/9.0;
        printf("%3.0f\t\t%3.2f\n", fahr, celcius);
        fahr = fahr + step;


    }



}


/* this is a comment */
// this is a comment 

/* this is a comment */