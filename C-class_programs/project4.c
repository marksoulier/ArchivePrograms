/*************************************************
* Function Title: Main
*
* Summary: print out approximate number for pi based
on the input of terms in the infinite series
*
* Inputs: amount of terms in the infinite series of pie
* Outputs: approximate value of pi
*
* Compile instructions: gcc project4.c –o project4.exe
**************************************************
* Pseudocode
*
* Begin
	Declare integer varable and float variables
	ask user for amount of terms
	loop through amount of term
	Add each term fraction to pi
	print final pi value
* End
*************************************************/
#include <stdio.h>

int main()
// Begin
{ 			
// Declare integer varable and float variables
	int n, i;
	float pi, a, Denom;
	Denom = 1;
	pi = 4/Denom;
	
// ask user for amount of terms
	printf("Enter an integer n. The value of pi will be ");
	printf("calculated using n terms of an infinite series.\n");
	printf("n: ");
	scanf("%d", &n);
	
// loop through amount of terms given
	for (i = 1 ; i < n; i++)
	{
		Denom = Denom + 2;
		if ( i % 2 == 1) 
		{
			a = -4/Denom;
		} else {
			a = 4/Denom;
		}
// Add each term fraction to pi
		pi = pi + a;
	}
// print final pi value
	printf("The approximation of pi using %d ", n);
	if (n > 1)
	{
		printf("terms ");
	}else {
		printf("term ");
	}
	printf("is %.20f.", pi);
	
	return 0;
} 
// End