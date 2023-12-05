// FUNDAMENTALS MODULE SOURCE
#include "fundamentals.h"
#define _CRT_SECURE_NO_WARNINGS
#define NUM_INPUT_SIZE 20
void fundamentalsV3(void) {//V3
    printf("*** Start of Copying Strings Demo ***\n");//Welcomes the user.
    char destination[BUFFER_SIZE];//declaring that destination variable have the BUFFER_SIZE value characters.
    char source[BUFFER_SIZE];//declaring that source variable have the BUFFER_SIZE value characters.
    do {
        destination[0] = '\0';//destination have 0 character then it equals to NULL
        printf("Destination string is reset to empty\n");
        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);//user input here and save to the source variable, checks if it in range of the BUFFER_SIZE value
        source[strlen(source) - 1] = '\0';
        if (strcmp(source, "q") != 0) {//if user input q the program end
            strcpy(destination, source);//the user input the source value and copy it on the destination value.
            printf("New destination string is \'%s\'\n", destination);// prints out the user input.
        }
    } while (strcmp(source, "q") != 0);
    printf("*** End of Copying Strings Demo ***\n\n");//bye message
}