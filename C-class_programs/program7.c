#include <stdio.h>

double poly (double Num);

/*************************************************
* Function Title: Main
*
* Summary: Prints the result of a polynomial from a double X
*
* Inputs: a double number X
* Outputs: the printed result of the polynomial
*
* Compile instructions: VS source.c
**************************************************
* Pseudocode
*
Begin
	Print prompt
	Get a positive double number
	print the poynomial of the number from the polynomial equation
End
*************************************************/

int main()
{ 							 
//Begin
	double X;
//Print prompt
	printf("This program calculates the following polynomial:\n");
	printf("2x^5 + 3x^4 - x^3 - 5x^2 + 6x - 7\n");
//Get a positive double number
	printf("Please enter a value for x: ");
	scanf("%lf", &X);
//print the poynomial of the number from the polynomial equation
	printf("Result: %.8lf", poly(X));
	return 0;
} 							 
//End



/*************************************************
* Function Title: poly
*
* Summary: Prints the resultant answer for any double value of X.
*
* Inputs: a double for X in polynomial
* Outputs: Result of the polynomial
*
* Compile instructions: none
**************************************************
* Pseudocode
*
Begin
	compute Polynomial
	return result
End
*************************************************/

double poly (double Num) 
{
//Begin
	double Result;
//compute Polynomial
	Result = 2 * Num * Num * Num * Num * Num + 3 * Num * Num * Num * Num
	- Num * Num * Num - 5 * Num * Num + 6 * Num - 7;
//return result
	return Result;
//End
}