#pragma once

#include <stdbool.h>
#include <stdlib.h>

enum TokenType {
    number,
    operation,
};

struct Token {
    enum TokenType type;
    char value;
};

struct Token *CreateToken(const char chr);

void PrintToken(struct Token *token);
