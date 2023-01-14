#include <stdio.h>

void palidrome(int *string, int *stringptr);

/*************************************************
* Function Title: Main
*
* Summary: this program will take a statment from the user and print if
it is a palidrome or not
*
* Inputs: charecters in a statment
* Outputs: print statment of pailidrome or not a pailidrome
*
* Compile instructions: gcc program9.c –o program9.exe
**************************************************
* Pseudocode
*
* Begin
	prompt user for a statment
	scan each charecter individually
	see if the letter is with the range of lower and uppercase letters
	read in charecters and store only charecters as capital letter
	call the palidrome function on the array of charecters 
* End
*************************************************/
#define N 200


int main()
{ 			
//Begin
	int string[N], *stringptr = string;
	int charecter;
//prompt user for a statment
	printf("Enter a word/phrase: ");
	
//scan each charecter individually
	for(; stringptr<=(string+N);)
	{
		scanf("%c", &charecter);
//see if the letter is with the range of lower and uppercase letters
		if(charecter == '\n'){
			break;
		}
//read in charecters and store only charecters as capital letter
		if(charecter >= 65 && charecter <= 90){
			*stringptr = charecter;
			stringptr++;
		}
			
		if(charecter >= 97 && charecter <= 122){
			charecter -= 32;
			*stringptr = charecter;
			stringptr++;
			}
		
	}
	stringptr--;
//call the palidrome function on the array of charecters 
	palidrome(string, stringptr);
	return 0;
} 							 
// End


/*************************************************
* Function Title: palidrome
*
* Summary: 
*
* Inputs: an array of integers and a address to the final position
of charecters in the array
* Outputs: a print statment of if it is a palidrome or not a pailidrome
*
* Compile instructions: NA
**************************************************
* Pseudocode
*
* Begin
	check each value starting from the back and front working towards the middle
	print the result
* End
*************************************************/

void palidrome(int *string, int *stringptr)
{
//Begin
//check each value starting from the back and front working towards the middle
	int result;
	result = 0;
	for(;string < stringptr; string++, stringptr--)
	{
		if(*string == *stringptr){
			result = 1;
		}else{
			break;
		}
	}
	
//print the result
	if(result){
		printf("The word/phrase is a palindrome.");
	}else{
		printf("The word/phrase is not a palindrome.");
	}
//End
}