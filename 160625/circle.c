#include <stdio.h>

int main(void){

    printf("a simple circle calculation program\n");

    #define LOWER 0 
    #define UPPER 50
    #define STEP 5
    #define PI 3.141592
    printf("a while loop used to show ascending circle\n");

    float diameter = LOWER;

    printf("Diameter\tRadius\tArea\n");

    while(diameter <= UPPER){

        float radius = diameter/2.0;
        float area = PI * radius * radius;
        
        printf("%3.0f\t\t%3.1f\t%3.3f\n", diameter, radius, area);
        diameter = diameter + STEP;
    }

    printf("a for loop used to show descending circle!\n");
    printf("Diameter\tRadius\tArea\n");

    for(diameter = UPPER; diameter >= LOWER; diameter = diameter - STEP){
        float radius = diameter/2.0;
        float area = PI * radius * radius;        
        printf("%3.0f\t\t%3.1f\t%3.3f\n", diameter, radius, area);


    }


}