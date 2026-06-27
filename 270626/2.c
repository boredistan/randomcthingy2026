//trying to implement wc from K&R myself (sent it to gemini for checking, turned out my og code had a bug since I didn't include else if)

#include <stdio.h> //essential for starting any program

//defining the inner and outer using symbolic constants basically to see whether I am in a word 

#define INNER 1 
#define OUTER 0

//entering the main function

int main(void){
    //initializing variables to 0
    int state, newWord, newCharacter, newLine;  //sets all the int vars to 0
    state = newWord = newCharacter = newLine = 0;
    state = OUTER; // already initialized but I still did it anyway
    int inputChar;

    //setting the main while loop up which will input all chars until EOF which is ctrl D
    while ((inputChar = getchar()) != EOF){
        //have to count any new chars
        newCharacter++; //for some reason the book has it prefix

        //counting new lines

        if(inputChar == '\n'){
            newLine++;
        }

        //getting it out
        if (inputChar == '\n' || inputChar == '\t' || inputChar == ' '){
            state = OUTER;
        }

        //if it is out then when it encounters another thing surely it must be in
        else if (state == OUTER){
            state = INNER;
            newWord++;
        }


    }

    printf("%d %d %d\n", newWord, newCharacter, newLine);

    return 0; // returns 0, not done in the book but idk
}

/* 
original code below 
//trying to implement wc from K&R myself

#include <stdio.h> //essential for starting any program

//defining the inner and outer using symbolic constants basically to see whether I am in a word 

#define INNER 1 
#define OUTER 0

//entering the main function

int main(void){
    //initializing variables to 0
    int state, newWord, newCharacter, newLine;  //sets all the int vars to 0
    state = newWord = newCharacter = newLine = 0;
    state = OUTER; // already initialized but I still did it anyway
    int inputChar;

    //setting the main while loop up which will input all chars until EOF which is ctrl D
    while ((inputChar = getchar()) != EOF){
        //have to count any new chars
        newCharacter++; //for some reason the book has it prefix

        //counting new lines

        if(inputChar == '\n'){
            newLine++;
        }

        //getting it out
        if (inputChar == '\n' || inputChar == '\t' || inputChar == ' '){
            state = OUTER;
        }

        //if it is out then when it encounters another thing surely it must be in
        if (state == OUTER){
            state = INNER;
            newWord++;
        }


    }

    printf("%d %d %d\n", newWord, newCharacter, newLine);

    return 0; // returns 0, not done in the book but idk
}

*/