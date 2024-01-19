#ifndef LEXER_H
#define LEXER_H

#include <stdio.h>
#include <stdint.h>

/**
 * Converts the second line of the input file into values for representation over GPIO/8-segment display
 * @param filepath path to the file to be lexed
 * @return 2D array of values to be written to port C, port D (C,D order)
 */
int** lexFile(char* filepath);

#endif
