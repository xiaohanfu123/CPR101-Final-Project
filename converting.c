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
void converting(void) {
	// Print a message to the screen to indicate the what this demo is doing.
	printf("*** Start of Converting Strings to int Demo ***\n");

	// Declare a character array that can hold up to BUFFER_SIZE characters
	char intString[BUFFER_SIZE];

	
	int intNumber; // Declare an integer variable to hold the converted number

	// Start a loop that will keep running until the user decides to quit
	do {
		// Prompt the user to type a number as a string of characters
		printf("Type an int numeric string (q - to quit):\n");

		// Read the input from the user into the intString variable
		fgets(intString, BUFFER_SIZE, stdin);

		// Replace the newline character (entered when the user presses enter) with a null terminator to mark the end of the string
		intString[strlen(intString) - 1] = '\0';

		// Check if the user entered 'q' to quit. If not, proceed to convert the string to an integer
		if (strcmp(intString, "q") != 0) {
			// Use atoi (ASCII to Integer) function to convert the string to an integer
			intNumber = atoi(intString);

			// Print the converted integer to the screen
			printf("Converted number is %d\n", intNumber);
		}
		
	} while (strcmp(intString, "q") != 0); // If 'q' was entered, exit the loop

	// Print a message indicating the end of the program
	printf("*** End of Converting Strings to int Demo ***\n\n");
}

/* Version 2 */
//void convertingToDouble(void) {
//    printf("*** Start of Converting Strings to double Demo ***\n");
//    char doubleString[BUFFER_SIZE];
//    double doubleNumber;
//    do {
//        printf("Type the double numeric string (q - to quit):\n");
//        fgets(doubleString, BUFFER_SIZE, stdin);
//        doubleString[strlen(doubleString) - 1] = '\0';
//        if ((strcmp(doubleString, "q") != 0)) {
//            doubleNumber = atof(doubleString);
//            printf("Converted number is %f\n", doubleNumber);
//        }
//    } while (strcmp(doubleString, "q") != 0);
//    printf("*** End of Converting Strings to double Demo ***\n\n");
//}

/* Version 3 */
//void convertingToLong(void) {
//    printf("*** Start of Converting Strings to long Demo ***\n");
//    char longString[BUFFER_SIZE];
//    long longNumber;
//    do {
//        printf("Type the long numeric string (q - to quit):\n");
//        fgets(longString, BUFFER_SIZE, stdin);
//        longString[strlen(longString) - 1] = '\0';
//        if ((strcmp(longString, "q") != 0)) {
//            longNumber = atol(longString);
//            printf("Converted number is %ld\n", longNumber);
//        }
//    } while (strcmp(longString, "q") != 0);
//    printf("*** End of Converting Strings to long Demo ***\n\n");
//}