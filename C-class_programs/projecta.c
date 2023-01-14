/*************************************************
* Function Title: Main
*
* Summary: Calculate the check digit from a EAN code
*
* Inputs: Ena 12 digit code
* Outputs: Ena check digit
*
* Compile instructions: gcc Ena.c –o Ena.exe / Visual Studio
**************************************************
* Pseudocode
*
* Begin
* 	Ask user for EAN code
	Get 12 values from user
	Calculate check digit
	Print check digit
* End
*************************************************/
#include <stdio.h>

int main()
{ 											// Begin
	int D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, Sum1, Sum2;
											// Ask user for EAN code
	printf_s("Enter the first 12 digits of an EAN: ");
	scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
		&D1, &D2, &D3, &D4, &D5, &D6, 
		&D7, &D8, &D9, &D10, &D11, &D12);
	Sum1 = D2 + D4 + D6 + D8 + D10 + D12;	// Calcuate check digit
	Sum2 = D1 + D3 + D5 + D7 + D9 + D11;
	Sum1 = Sum1 * 3 + Sum2 - 1;
	Sum1 = Sum1 % 10;
	Sum1 = 9 - Sum1;
	printf_s("Check digit: %d", Sum1); 		// Print check digit
	return 0;
}											// End