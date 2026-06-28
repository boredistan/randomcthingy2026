//program to count how many times a number shows up in an input
//code was modified as according to gemini I made a bug woah
#include <stdio.h>

int main(void){
    int c, i;
    int countnumbers[10];
    for (i=0; i < 10; i++){
        countnumbers[i] = 0;
    }
   /* for (i=0; i < 9; i++){
        printf("\n%d\n", countnumbers[i]);
    }
*/
    while((c=getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            countnumbers[c - '0']++;
        }



    }

for (i=0; i < 10; i++){
        printf("\n%d shows up %d many times\n", i , countnumbers[i]);
    }


}



//original code below: 

/*
#include <stdio.h>

int main(void){
    int c, i;
    int countnumbers[9];
    for (i=0; i < 9; i++){
        countnumbers[i] = 0;
    }
  \* /* for (i=0; i < 9; i++){
        printf("\n%d\n", countnumbers[i]);
    }
*/
  /*  while((c=getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            countnumbers[c - '0']++;
        }



    }

for (i=0; i < 9; i++){
        printf("%d shows up %d many times\n", i , countnumbers[i]);
    }


}


*/