#include "Token.h"
#include <stdbool.h>
#include <stdio.h>

#define MAX_INPUT_LENGTH 50

// TODO Tokenize input

void Run() {
    bool running = true;

    char *userInput[MAX_INPUT_LENGTH];

    char test = '1';
    char test2 = '-';

    struct Token *token1 = CreateToken(test);
    struct Token *token2 = CreateToken(test2);
    PrintToken(token1);
    PrintToken(token2);

    /*
    while (running) {
        printf("Enter calculation: \n");
        scanf("%s", &userInput);

        if (&userInput == 'q') {
            running = false;
            printf("Quitting\n");
        }

        // Tokenize
    }
    */
}

int main() { Run(); }
