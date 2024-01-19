#include "lexer.h"

int** lexFile(char* filepath)
{
    FILE* joke = fopen(filepath, "r");

    if (NULL == joke)
    {
        // filepath was invalid 
        // TODO: Elaborate on error (print message to UART?)
        exit(1);
    }
    else
    {
        // TODO: Decide wether to look for '?' character or just second line
    }
}
