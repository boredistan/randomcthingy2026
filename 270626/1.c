#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){
    int inp, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while((inp = getchar())!= EOF){
        nc++;
        if (inp == '\n'){
            nl++;
        }
        else if (inp == ' ' || inp == '\n'|| inp == '\t' ){
            state = OUT;



        }
        else if (state == OUT){
            state = IN;
            nw++;



        }
                                                                                  



    }

    printf("%d %d %d", nl, nw, nc);


    return 0;
}