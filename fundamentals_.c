// FUNDAMENTALS MODULE SOURCE
#include "fundamentals.h"
#define _CRT_SECURE_NO_WARNINGS
#define NUM_INPUT_SIZE 20

void fundamentals(void) {
// V1
    printf("*** Start of Indexing Strings Demo ***\n");// welcomes the user.
    char buffer1[BUFFER_SIZE];//declaring that buffer1 variable have the BUFFER_SIZE value characters.
    char numInput[NUM_INPUT_SIZE];//declaring that numInput variable have the NUM_INPUT_SIZE value characters.
    size_t position;
    do {
        printf("Type not empty string (q - to quit) :\n"); // We ask the user to put a word of string.
        fgets(buffer1, BUFFER_SIZE, stdin);//user input here and save to the buffer1 variable, checks if it in range of the BUFFER_SIZE value
        buffer1[strlen(buffer1) - 1] = '\0';
        if (strcmp(buffer1, "q") != 0) {//if user input q the program end
            printf("Type the character position within the string:\n");// We ask the user a number to locate the specific character in the string they input.
            fgets(numInput, NUM_INPUT_SIZE, stdin);//user input here and save to the numInput variable, checks if it in range of the NUM_INPUT_SIZE value
            numInput[strlen(numInput) - 1] = '\0';
            position = atoi(numInput);
            if (position >= strlen(buffer1)) {// condition that if the position variable is greater than or equal to the string length of buffer1
                position = strlen(buffer1) - 1;// position varibles will equal to the length of buffer1 variable.
                printf("Too big... Position reduced to max. available\n");// if user put a number that greater than the number of the word they input. We tell them that it's too big
            }
            printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);// We output the character from the word user input.
        }
    } while (strcmp(buffer1, "q") != 0);
    printf("*** End of Indexing strings Demo ***\n\n");// end of the program.
    //V2
    printf("^^^ Start of Measuring Strings Demo ^^^\n");//welcomes the user.
    char buffer2[BUFFER_SIZE];//the maximum letters that the user can type.
    do {
        printf("Type a string (q - to quit):\n");//ask the user to input a string or type q to quit the program.
        fgets(buffer2, BUFFER_SIZE, stdin);//the letters or the string of the user input will compare to the maximum size.
        buffer2[strlen(buffer2) - 1] = '\0';
        if (strcmp(buffer2, "q") != '\0')
            printf("The length of \'%s\' is %d characters\n",//the program shows the output of user input.
                buffer2, (int)strlen(buffer2));//the names of %s and %d above.
    } while (strcmp(buffer2, "q") != 0);//the program waits for the user to type in "q".
    printf("*** End of Measuring strings Demo ***\n\n");//The bye message of the program after user type "q".
    //V3
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


