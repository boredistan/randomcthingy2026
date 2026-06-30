//histogram freq input
#include <stdio.h>
int main(void){
    int arrayOfChars[100];
    int i = 0, j = 0;
    for (i = 0; i < 100; i++){
        arrayOfChars[i] = 0;
    }
    int freqOfChars[100];
    for (i = 0; i<100; i++){
        freqOfChars[i] = 0;
    }
    int inputFromKeyboard = 0;
    int found = 0;
    int done = 0;
    int found2 = 0;
    while((inputFromKeyboard = getchar())!= EOF){
        found = 0;
        found2=0;
        j = 0;
        done = 0;
        for (i = 0; i < 100; i++){
            if(inputFromKeyboard == arrayOfChars[i]){
                found = 1;
            } 
        }
        if (found == 0){
            while (j<100 && done == 0){
                if (arrayOfChars[j] == 0){
                    arrayOfChars[j] = inputFromKeyboard;
                    freqOfChars[j]++;
                    done = 1;
                }
                j++;
            }
        }
        else if (found == 1){
            j = 0;
            while (found2 == 0){
                for (j = 0; j <100; j++){
                    if (arrayOfChars[j] == inputFromKeyboard){
                        freqOfChars[j]++;
                        found2 = 1;
                    }
                        
                } 
            }
            
        }
    }

    i = j = 0;
printf("\n");
int k = 0;
    

    //histogram part

    for (i = 0; i <100; i++ ){
        if(arrayOfChars[i]!= 0){
            k = arrayOfChars[i];
            putchar(k);
            
            for (j=0; j<freqOfChars[i]; j++){
                printf("=");
            }
            printf("\n");
        }
    }

return 0;
}