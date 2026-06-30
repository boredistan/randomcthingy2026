//histogram of length of words
#include <stdio.h>

#define In 1
#define Out 0

int main(void){

    int i = 0,c=0, chars = 0, k =0;
    int state = Out;
    int wordCount[30];
    for (i = 0; i<30; i++){
        wordCount[i] = 0;
    }



    while ((c= getchar())!=  EOF){

        if (c =='\n' || c==' '|| c == '\t'){
            state = Out;
            k = chars;
            wordCount[(k-1)]++;
            chars = 0;
            k = 0;
        }
        else if (state == Out){
            state = In;
            chars++;
        }
        else if (state == In){
            chars++;
        }
        
    }
    if (state == In){
        wordCount[k]++;
    }
   
   
    printf("\n");
    for (i = 0; i < 30; i++){
        if(wordCount[i] != 0){
            printf("Words with %d chracters have a freq of %d times\n", (i+1), wordCount[i]);
        }
    }




    return 0;
}