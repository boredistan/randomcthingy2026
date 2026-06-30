//failed to make that freq histogram of lengths will try again
//this also has a bug 

#include <stdio.h>

#define in 1
#define out 0

int main(void){
    printf("start talking loser and keep your words to 25 words max\n");
    int i=0,j = 0, k = 0;
    int inputtedCharacter = 0, chars = 0;
    int state = out;
    int Frequency[30];
    for (i = 0; i < 30; i++){
        Frequency[i] = 0;
    }
    while((inputtedCharacter = getchar())!= EOF && chars < 25){
        if (inputtedCharacter == ' '|| inputtedCharacter == '\n'|| inputtedCharacter == '\t'){
            state = out;
            Frequency[chars]++;
            chars = 0;
        }
        else if(state == out){
            state = in;
            chars++;
        }
        else if (state == in){
            chars++;
        }
        
    }
    if (chars < 25){
        Frequency[chars]++;
        chars = 0;
    }
    
    printf("\n");
    for (i = 0; i < 30; i++){
        k = Frequency[i];
        if (k != 0){
            printf("%d ", i);
            for (j = 0; j < k; j++){
                if (k != 0){
                    printf("=");
                }
            }
            printf("\n");
            
        }
    }



    return 0;
}