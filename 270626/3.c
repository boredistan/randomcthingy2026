//Write a program that prints its input one word per line 
//according to gemini, that means I write a word and then it ignores the other things and gives a new line

#include <stdio.h>

//the task seems to modify the word counter so I'll try to make it similar
#define Inner 1 
#define Outer 0
int main(void){
    int nl, nw, state, c;
    nl = nw = 0;
    state = Outer;

    while((c= getchar()) != EOF){
        if (c == ' '|| c == '\n' || c == '\t'){
            printf("\n");
            state = Outer;
        }
        else if (state == Outer){
            putchar(c);
            nw++;
            state = Inner;
        }
        else if(state == Inner){
            putchar(c);
        }
    }

    return 0;
}

//ok so I sent it to gemini for evaluation apparently it is buggy but who cares