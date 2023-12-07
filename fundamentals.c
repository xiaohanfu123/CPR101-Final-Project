// FUNDAMENTALS MODULE SOURCE
#include <stdio.h>
#include <string.h>
#include "fundamentals.h"
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 100
#define NUM_INPUT_SIZE 20

void fundamentals(void) {
// V1
    printf("*** Start of Indexing Strings Demo ***\n");// welcomes the user.
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;
    do {
        printf("Type not empty string (q - to quit) :\n"); // We ask the user to put a word of string.
        fgets(buffer1, BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0';
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");// We ask the user a number to locate the specific character in the string they input.
            fgets(numInput, NUM_INPUT_SIZE, stdin);
            numInput[strlen(numInput) - 1] = '\0';
            position = atoi(numInput);
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");// if user put a number that greater than the number of the word they input. We tell them that it's too big
            }
            printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);// We output the character from the word user input.
        }
    } while (strcmp(buffer1, "q") != 0);
    printf("*** End of Indexing strings Demo ***\n\n");// end of the program.
}
