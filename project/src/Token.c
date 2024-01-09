#include "Token.h"
#include <stdio.h>
#include <stdlib.h>

struct Token *CreateToken(const char chr) {
    struct Token *token = malloc(sizeof(struct Token));

    switch (chr) {
    case '0': {
        token->type = number;
        token->value = '0';
        break;
    }
    case '1': {
        token->type = number;
        token->value = '1';
        break;
    }
    case '2': {
        token->type = number;
        token->value = '2';
        break;
    }
    case '3': {
        token->type = number;
        token->value = '3';
        break;
    }
    case '4': {
        token->type = number;
        token->value = '4';
        break;
    }
    case '5': {
        token->type = number;
        token->value = '5';
        break;
    }
    case '6': {
        token->type = number;
        token->value = '6';
        break;
    }
    case '7': {
        token->type = number;
        token->value = '7';
        break;
    }
    case '8': {
        token->type = number;
        token->value = '8';
        break;
    }
    case '9': {
        token->type = number;
        token->value = '9';
        break;
    }
    case '/': {
        token->type = operation;
        token->value = '/';
    }

    case '*': {
        token->type = operation;
        token->value = '*';
    }

    case '+': {
        token->type = operation;
        token->value = '+';
    }

    case '-': {
        token->type = operation;
        token->value = '-';
    }
    }

    return token;
}

static char *GetTypeAsString(enum TokenType type) {
    char *str;
    switch (type) {
    case number:
        return "Number";
    case operation:
        return "Operation";
    }
}

void PrintToken(struct Token *token) {
    printf("Token\n");
    printf("\tType: %s\n", GetTypeAsString(token->type));
    printf("\tValue: %c\n", token->value);
    printf("\tValue (ASCII): %d\n", token->value);
}
