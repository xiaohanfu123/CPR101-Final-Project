// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80 //Defined macro 'BUFFER_SIZE' setting the max string length to convert.
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include "converting.h"

/*
Author: Hanfu Xiao
Email: hxiao15@myseneca.ca
ID: 033503145
Date Written: 11-28-2023
Course: CPR101.NNN
Final Project
*/


// v1
//The function void converting(void) converts a string representation of an integer into its corresponding integer value.
//void converting(void) {
//	// Print a message to the screen to indicate the what this demo is doing.
//	printf("*** Start of Converting Strings to int Demo ***\n");
//
//	// Declare a character array that can hold up to BUFFER_SIZE characters
//	char intString[BUFFER_SIZE];
//
//	
//	int intNumber; // Declare an integer variable to hold the converted number
//
//	// Start a loop that will keep running until the user decides to quit
//	do {
//		// Prompt the user to type a number as a string of characters
//		printf("Type an int numeric string (q - to quit):\n");
//
//		// Read the input from the user into the intString variable
//		fgets(intString, BUFFER_SIZE, stdin);
//
//		// Replace the newline character (entered when the user presses enter) with a null terminator to mark the end of the string
//		intString[strlen(intString) - 1] = '\0';
//
//		// Check if the user entered 'q' to quit. If not, proceed to convert the string to an integer
//		if (strcmp(intString, "q") != 0) {
//			// Use atoi (ASCII to Integer) function to convert the string to an integer
//			intNumber = atoi(intString);
//
//			// Print the converted integer to the screen
//			printf("Converted number is %d\n", intNumber);
//		}
//		
//	} while (strcmp(intString, "q") != 0); // If 'q' was entered, exit the loop
//
//	// Print a message indicating the end of the program
//	printf("*** End of Converting Strings to int Demo ***\n\n");
//}

/* Version 2 */
//The function void converting(void) converts a string representation of an integer into its corresponding double value.
//void converting(void) {
//    //	// Print a message to the screen to indicate the what this demo is doing.
//    printf("*** Start of Converting Strings to double Demo ***\n");
//
//    // Declare a buffer to hold the user input
//    char doubleString[BUFFER_SIZE];
//    double doubleNumber;
//
//    do {
//        // Prompt the user to enter a double value in string format or 'q' to quit
//        printf("Type the double numeric string (q - to quit):\n");
//
//        // Read the input from the user into the buffer
//        fgets(doubleString, BUFFER_SIZE, stdin);
//
//        // Replace the newline character added by fgets with a null terminator to properly format the string
//        doubleString[strlen(doubleString) - 1] = '\0';
//
//        // Check if the user wants to quit the loop; if not, proceed with conversion
//        if ((strcmp(doubleString, "q") != 0)) {
//            // Convert the string to a double using atof, which interprets the string as a floating-point number
//            doubleNumber = atof(doubleString);
//
//            // Output the converted number
//            printf("Converted number is %f\n", doubleNumber);
//        }
//    } while (strcmp(doubleString, "q") != 0); // Continue the loop until the user decides to quit by entering 'q'
//
//    // Print a message indicating the end of the program
//    printf("*** End of Converting Strings to double Demo ***\n\n");
//}
/* Version 3 */
void converting(void) {
    // The function void converting(void) converts a string representation of an integer into its corresponding long value.
    printf("*** Start of Converting Strings to long Demo ***\n");

    char longString[BUFFER_SIZE]; // Buffer to store the input string representing a long integer
    long longNumber; // Variable to hold the converted long integer value

    do {
        // Prompt the user to enter a string representation of a long integer or 'q' to quit
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin); // Read the input string from standard input

        longString[strlen(longString) - 1] = '\0'; // Remove the newline character at the end of input

        // Check if the input is not the quit command 'q'
        if ((strcmp(longString, "q") != 0)) {
            longNumber = atol(longString); // Convert the input string to a long integer
            printf("Converted number is %ld\n", longNumber); // Display the converted long integer
        }
    } while (strcmp(longString, "q") != 0); // Continue the loop until 'q' is entered

    // Ending message for the demo
    printf("*** End of Converting Strings to long Demo ***\n\n");
}