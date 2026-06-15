#include <stdio.h>

int main(void){

    float fahr, celc;
    int step, lower, upper;
    step = 20;
    lower = 0, celc = 0;
    upper = 300;

    while(celc <= upper){

        fahr = ((9.0/5.0) * celc) + 32;
        printf("celcius\tfahrenheit\n");
        printf("%3.0f\t%3.2f\n", celc, fahr);
        celc = celc + step;
        

    }


}