/*
Author: Wing Ho Chau
Email: myseneca@myseneca.ca
ID: 150924231
Date Written: 12-1-2023
Course: CPR101.NNN
Final Project
*/

// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS  
#define BUFFER_SIZE 300  //Sets how many letters the user can input.
#include "tokenizing.h"  //includes header file to point libaraies

void tokenizing() {
	/* Version 1 */
	//printf("*** Start of Tokenizing Words Demo ***\n");
	//char words[BUFFER_SIZE];  //words will be used for user input
	//char* nextWord = NULL;  //nextWord is an array to store the return of tokenized strings.
	//int wordsCounter;  //wordsCounter will be used to count how many tokenized words are in the delimited input

	//do {
	//	printf("Type a few words separated by space (q - to quit):\n");
	//	fgets(words, BUFFER_SIZE, stdin);  //receives input from user and store in words[]
	//	words[strlen(words) - 1] = '\0';  //Put a null terminator to the end of array
	//	if (strcmp(words, "q") != 0) {  //Do the tokenizing if user doesn't input 'q'
	//		nextWord = strtok(words, " ");  //use of tokenizing function to tokenize the word by delimiter 'whitespace'
	//		wordsCounter = 1;  //Count the words, start with 1
	//		while (nextWord) {  //A loop for printing tokenized words unless no more are found
	//			printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); //Print the tokenized words
	//			nextWord = strtok(NULL, " ");  //Get the next tokenized words
	//		}
	//	}
	//} while (strcmp(words, "q") != 0);  //infinite loop unless 'q' is input by user
	//printf("*** End of Tokenizing Words Demo ***\n\n");


/* Version 2 */
//>> insert here
	printf("*** Start of Tokenizing Words Demo ***\n");
	char phrases[BUFFER_SIZE];  //phrases will be used for user input and is the argument for 
	char* nextPhrase = NULL;  //nextPhrase is an array to store the return of tokenized strings.
	int phrasesCounter;  //phrasesCounter will be used to count how many tokenized phrases are in the delimited input

	do {
		printf("Type a few words separated by space (q - to quit):\n");
		fgets(phrases, BUFFER_SIZE, stdin);  //receives input from user and store in phrases[]
		phrases[strlen(phrases) - 1] = '\0';  //Put a null terminator to the end of array
		if (strcmp(phrases, "q") != 0) {  //Do the tokenizing if user doesn't input 'q'
			nextPhrase = strtok(phrases, ",");  //use of tokenizing function to tokenize the input by delimiter ','(comma)
			phrasesCounter = 1;  //Count the words, start with 1
			while (nextPhrase) {  //A loop for printing tokenized phrases unless no more are found
				printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); //Print the tokenized phrases
				nextPhrase = strtok(NULL, ",");  //Get the next tokenized phrases
			}
		}
	} while (strcmp(phrases, "q") != 0);  //infinite loop unless 'q' is input by user
	printf("*** End of Tokenizing Words Demo ***\n\n");

/* Version 3 */
//>> insert here


}