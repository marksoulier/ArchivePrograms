#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*************************************************
* Function Title: Main
*
* Summary: this function takes a argument from the user as a paramter
			using the later input words apon specification it prints
			the smallest and largest word in order of the alphabet
*
* Inputs: a string consiting of a string number
* Outputs: the smallest and largest word accounrding to place in alphabet
*
* Compile instructions: gcc program10.c –o program10.exe
**************************************************
* Pseudocode
*
* Begin
	prompt for inicial smallest and largest word
	for all the remainding words to be places prompt and compare word
	if word is larger in the alphabet place as the new largest
	if word is smaller in the alphabet place as the new smallest
	print the results
* End
*************************************************/
#define N 30

int main(int argc, char *argv[])
{ 							 
//Begin
	char s[N];
	char largest[N];
	char smallest[N];
	int i, j;
	j = atoi(argv[1]);
//prompt for inicial smallest and largest word
	printf("Enter word: ");
	scanf("%s", s);
	strcpy(largest, s);
	strcpy(smallest, s);
//for all the remainding words to be places prompt and compare word
	for(i = 0; i + 1 < j; i++){
		printf("Enter word: ");
		scanf("%s", s);
//if word is larger in the alphabet place as the new largest
		if(strcmp(s, largest) >= 0){
			strcpy(largest, s);
		}else{
//if word is smaller in the alphabet place as the new smallest
			if(strcmp(s, smallest) <= 0){
				strcpy(smallest, s);
			}
		}
	}
//print the results
	printf("\n");
	printf("Smallest word: %s\n", smallest);
	printf("Largest word: %s", largest);
	return 0;
} 							 
//End