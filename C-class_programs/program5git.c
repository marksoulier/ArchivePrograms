/*************************************************
* Function Title: Main
*
* Summary: Prints “Hello World” on console
*
* Inputs: none
* Outputs: none
*
* Compile instructions: gcc hello.c –o hello.exe
**************************************************
* Pseudocode
*
* Begin
* Print “Hello World”
* End
*************************************************/
#include <stdio.h>
#include <math.h>

int main()
{ 							 // Begin
	int Num, n;
	double y1, NewtonNum, Average, abdiff;
	y1 = 1;
	abdiff = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &Num);
	n = 10;
	while (abdiff > 0.0001) {
		NewtonNum = Num/y1;
		Average = (NewtonNum - y1)/2 + y1;
		abdiff = Average - y1;
		if (abdiff > 0) {
		} else {
			abdiff = -1 * abdiff;
		}
		y1 = Average;
	}
	
	printf("The square root of your Number: %.5f", Average); // Print “Hello World”
	return 0;
} 							 // End