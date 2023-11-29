#define _CRT_SECURE_NO_WARNINGS
/*
Author: Jarvinia Zhao
Email: jzhao169@myseneca.ca
ID: 143013233
Date Written: 11-27-2023
Course: CPR101.NNN
Final Project
*/

/* The costomized library "manipulating.h" header file provides :
    2 standard libraies: stdio.h and string.h
    Defined macro 'BUFFER_SIZE' setting the max string length for manipulation
    Prototype for function manipulating
*/
#include "manipulating.h"   

/*
Function Purpose: This function provides the functionality to manipulate Cstings
*/
void manipulating(void) {
/* Version 1 */
    //------------- Demo of String Concatenate ---------------
    
    // Display the staring message for user to understand the purpose of this demo
    printf("**** Start of Concatenating Strings Demo ****\n");
    // Declare 2 Cstring to store the string for concatenation 
    char string1[BUFFER_SIZE]; // first string 
    char string2[BUFFER_SIZE]; // second string - concatenate to the end of first string
    
    // Start a loop at least once and will continue until the user enter q to quit
    do {
        // Prompt the user for the first string
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin); // Read the first input string from user
        // Remove the newline character at the end of the input string
        string1[strlen(string1) - 1] = '\0';

        // Check whether the user wants to exit current demo. If user input 'q', then exit the demo
        if (strcmp(string1, "q") == 0) {
            break;
        }

        // Prompt the user for the second string
        printf("Type the 2nd string:\n");
        fgets(string2, BUFFER_SIZE, stdin);
        // Remove the newline character at the end of the input string
        string2[strlen(string2) - 1] = '\0'; // Read the second input string from user

        // Concatenate the string2 to the string1
        strcat(string1, string2);
        // Display the result after concatenation
        printf("Concatenated string is '%s'\n", string1);

    } while (strcmp(string1, "q") != 0); // Continue looping until the user enter 'q' for the string1

    printf("**** End of Concatenating Strings Demo ****\n");


/* Version 2 */
    printf("**** Start of Comparing Strings Demo ****\n");
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result;
    do {
        printf("Type the 1st string to compare (q - to quit):\n");
        fgets(compare1, BUFFER_SIZE, stdin);
        compare1[strlen(compare1) - 1] = '\0';
        if (strcmp(compare1, "q") == 0) {
            break;
        }
        printf("Type the 2nd string to compare:\n");
        fgets(compare2, BUFFER_SIZE, stdin);
        compare2[strlen(compare2) - 1] = '\0';
        result = strcmp(compare1, compare2);
        if (result < 0) {
            printf("\"%s\" string is less than \"%s\"\n", compare1, compare2);
        }
        else if (result == 0) {
            printf("\"%s\" string is equal to \"%s\"\n", compare1, compare2);
        }
        else {
            printf("\"%s\" string is greater than \"%s\"\n", compare1, compare2);
        }
    } while (strcmp(compare1, "q") != 0);
    printf("**** End of Comparing Strings Demo ****\n");
    

/* Version 3 
    printf("**** Start of Searching Strings Demo ****\n");
    char haystack[BUFFER_SIZE];
    char needle[BUFFER_SIZE];
    char* occurrence = NULL;
    do {
        printf("Type the string (q - to quit):\n");
        fgets(haystack, BUFFER_SIZE, stdin);
        haystack[strlen(haystack) - 1] = '\0';
        if (strcmp(haystack, "q") == 0) {
            break;
        }
        printf("Type the substring:\n");
        fgets(needle, BUFFER_SIZE, stdin);
        needle[strlen(needle) - 1] = '\0';
        occurrence = strstr(haystack, needle);
        if (occurrence) {
            printf("\"%s\" found at %d position\n", needle, (int)(occurrence - haystack));
        }
        else {
            printf("Not found\n");
        }
    } while (strcmp(haystack, "q") != 0);
    printf("**** End of Searching Strings Demo ****\n");
    */
}