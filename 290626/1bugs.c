//histogram word length input
//this is my bugged origninal version
/* 

thiking:
We need to count the words, then we need to count the characters in that word 
each word is it's own so it'll be like 
word1 =====
word2 ==================
word3 ===============================================
the length of that will be achieved by looping the printf and after the loop doing \n
I think the array should be a very large number like 1000 though I think that can cause bugs
hopefully I interpreted the propelem propelry

*/
#include <stdio.h>

#define inner 1
#define outer 0
int main(void){
    printf("Welcome to the histogram program. Please note that there is a limit of 450 words\n");
    int i, j, k, n, f = 0, c, wc = 0, state;
    state = outer;
    int word[500];
    for (i = 0;i < 500; i++){
        word[i]=0;
    }

     while (((c=getchar()) != EOF) && (f<451)){
        
        if (c == '\n' || c == ' '|| c == '\t'){
            state = outer;
        }
        else if (state == outer){
            state = inner;
            j++;
            f++;
            wc++;
        }
        if (state == inner){
            word[j]++;
        }
     }
      for (i = 0;i < 500; i++){
        if (word[i] != 0){
            k = word[i];
            printf("\n");
            printf("word number %d ", (i - 1 ));
            for (n = 0; n<k; n++){
                printf("=");
            }
            printf("\n");
        }

    }
     return 0;
}
