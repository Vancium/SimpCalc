#pragma once
#include "../includes/definitions.h"
#include "Token.h"
#include <stdio.h>

const char *GetInput();

struct Token *CollectTokens(const char *input);
