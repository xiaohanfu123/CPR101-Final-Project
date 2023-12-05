// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS  
#define BUFFER_SIZE 300  //Sets how many letters the user can input.
#include "tokenizing.h"  //includes header file to point libaraies

void tokenizing() {
/* Version 1 */
	printf("*** Start of Tokenizing Words Demo ***\n");
	char words[BUFFER_SIZE];  //words will be used for user input and is the argument for 
	char* nextWord = NULL;  //
	int wordsCounter;  //wordsCounter will be used to count how many words are in the delimited input
	
	do {
		printf("Type a few words separated by space (q - to quit):\n");
		fgets(words, BUFFER_SIZE, stdin);  //receives input from user and store in words[]
		words[strlen(words) - 1] = '\0';  //Put a null terminator to the end the array
		if (strcmp(words, "q") != 0) {  //Do the tokenizing if user doesn't input 'q'
			nextWord = strtok(words, " ");  //use of tokenizing function to tokenize the word by delimiter 'whitespace'
			wordsCounter = 1;  //Count the words, start with 1
			while (nextWord) {  //A loop for printing tokenized words unless no more are found
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); //Print the tokenized words
				nextWord = strtok(NULL, " ");  //Get the next tokenized words
			}
		}
	} while (strcmp(words, "q") != 0);  //infinite loop unless 'q' is input by user
	printf("*** End of Tokenizing Words Demo ***\n\n");


/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}