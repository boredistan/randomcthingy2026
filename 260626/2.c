//now we will count the spaces and new lines and tabs and stuff
#include <stdio.h>

int main(void){



    int c, tab=0, nl=0, sp=0;

    while ((c=getchar())!= EOF){
        if(c == '\t'){
            tab++;
        }
        if (c=='\n'){
            nl++;
        }
        if (c == ' '){
            sp++;
        }

    }
    printf("stats are %d tabs, %d lines, %d spaces", tab, nl, sp );






    return 0;
}