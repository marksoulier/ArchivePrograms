#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 15

void recursive(char *arr[], int len);


/*************************************************
* Function Title: Main
*
* Summary: takes strings and orders them according to the alphabet
*
* Inputs: the amount of words to be input and then the subsequent
words
* Outputs: the words in alphabetical order
*
* Compile instructions: gcc program13.c –o program13.exe
**************************************************
* Pseudocode
*
* Begin
	get the input of all the charecters
	sort the array
	print final array
* End
*************************************************/
int main(int argc, char *argv[])
{ 							 
// Begin
	char temp[MAX_LEN];
	int arg;
	arg = atoi(argv[1]);
	char *arrayofstrings[arg];
	char *tempsorter = temp;
	int i, j = 0;
//get the input of all the charecters
	for(i=0; i < arg; i++){
		printf("Enter a word: ");
		scanf("%s", temp);
		arrayofstrings[i] = malloc(strlen(temp)+1);
		if (arrayofstrings[i] == NULL)
		{
			printf("Memory allocation error!\n");
			exit(1);
		}
		strcpy(arrayofstrings[i], temp);
	}

//sort the array
recursive(arrayofstrings, arg);

//print final array
	printf("Sorted words: ");
	for(i=0; i < arg; i++){
		printf("%s ", arrayofstrings[i]);
	}
	return 0;
}					
//End


/*************************************************
* Function Title: recursive
*
* Summary: Sorts the array as a bubble sort algorithum with recursion
*
* Inputs: the string to be sorted by alphabet
* Outputs: the length of the string
*
* Compile instructions: NA
**************************************************
* Pseudocode
*
* Begin
	compare each string to next string
	repeat process with 1 less element
* End
*************************************************/
//Begin
void recursive(char *arr[], int len){
   int i;
   char *temp;

   if (len == 1){
      return;
   }
//compare each string to next string
   for (int i=0; i < len-1; i++){
      if (strcmp(arr[i], arr[i+1]) >= 0){
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
      }
   }
//repeat process with 1 less element
   len -= 1;
   recursive(arr, len);
}
//End
