/*************************************************
* Function Title: Main
*
* Summary: Goes through a random walk in a array of 10 by 10
then prints the resultant path to the terminal while using capital letters
incrementing by one every step
*
* Inputs: none
* Outputs: a grid of the results of the random walk
*
* Compile instructions: gcc program6.c –o program6.exe
**************************************************
* Pseudocode
*
* Begin
* 	Define array and variables
	inicialize Bool variables to false
	start time for the random variables
	set array with all "."
	Start a loop as long as one directional move is possible
	Create a random move (up, down, left, and right)
	Apply a test from the random move
	Test the move if it is possible
	else repeat the loop
	Print out the array
* End
*************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLUMN 10
#define ROW 10


int main()
{ 							 
// Begin

// Define array and variables
	int array[ROW][COLUMN];
	int i, j, k, n, ran;
	int Currenti, Currentj;
	int Testi, Testj;
	
// inicialize Bool variables to false
	int Boolu, Boold, Booll, Boolr;
	Boolu = Boold = Booll = Boolr = 0;
	Currenti = 0;
	Currentj = 0;
	k = 66;
	
// start time for the random variables
	srand(time(NULL));
	
// set array with all "."
	for (i = 0; i < ROW; i++){
		for(j = 0; j < COLUMN; j++) {
			array [i][j] = 46;
		}
		
	}
	
	array[0][0] = 65;
	while (!(Boolu && Boold && Booll && Boolr)){
// Create a random move (up, down, left, and right)
	ran = rand();
	ran = ran % 4;
	Testi = Currenti;
	Testj = Currentj;
// Apply a test from the random move
		switch(ran) {
			case 0: 
				Testi += 1;
				Boold = 1;
				break;
			case 1:
				Testj += 1;
				Boolr = 1;
				break;
			case 2:
				Testi -= 1;
				Boolu = 1;
				break;
			case 3:
				Testj -= 1;
				Booll = 1;
				break;
		}
// Test the move if it is possible
	if (array[Testi][Testj] == 46 && Testi >= 0 && Testj >= 0 && Testi < ROW & Testj < COLUMN) {
			array[Testi][Testj]= k;
			Currenti = Testi;
			Currentj = Testj;
			k++;
			if(k == 91) {
				k = 65;
			}
			Boolu = Boold = Booll = Boolr = 0;
			//the tested array is the current array
// else repeat the loop
	} else {
		
	}
	
// Print out the array
	}
	for (i = 0; i < 10; i++){
		for(j = 0; j < 10; j++) {
			printf("%5c", array[i][j]);
		}
		printf("\n\n");
		
	}
	return 0;
} 							 
// End