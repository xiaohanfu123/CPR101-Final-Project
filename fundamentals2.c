#include "fundamentals.h"
#define _CRT_SECURE_NO_WARNINGS
void fundamentals2(void) {
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
}
