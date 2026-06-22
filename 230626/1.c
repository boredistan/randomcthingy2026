/* 
Have procrastinated too much 
Need to go over content once again to recall stuff
Circle program is probs good enough to show all until the getchar putchar shit that I didn't do properly yet 
will do that properly soon 
*/


#include <stdio.h>

int main(void){
    printf("Circle program to revise most content until get char put char chapter\n");
    #define LOW 0
    #define HIGH 50 
    #define STEP 5
    #define PI 3.141592

    int diameter = LOW;
    float radius, area, perimeter ;

    printf("For loop with ascending for area\n");

    for(diameter = LOW; diameter <= HIGH; diameter = diameter + STEP){
        radius = diameter/2.0;
        area = PI * radius * radius;
        printf("%2d\t%3.3f\n",diameter, area);



    }


    printf("While loop with descending for perimeter\n");
    diameter = HIGH;
    while(diameter >= LOW){
        perimeter = PI * diameter;
        printf("%2d\t%3.3f\n",diameter, perimeter);
        diameter = diameter - STEP;



    }
    


return 0;

}