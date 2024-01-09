#include "Token.h"
#include "Tokenizer.h"
#include <stdio.h>
#include <stdlib.h>

const char *GetInput() {
    char *input;
    printf("Enter Calculation: \n");
    scanf("%s", &input);
    return input;
}

struct Token *CollectTokens(const char *input) {
    struct Token *tokens = malloc(sizeof(struct Token) * MAX_INPUT_LENGTH);
}
