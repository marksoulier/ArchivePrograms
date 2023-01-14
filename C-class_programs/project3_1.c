/*************************************************
* Function Title: Main
*
* Summary: Prints largest and smallest number of a 5 integer set
*
* Inputs: 5 integers
* Outputs: smallest and largest integers
*
* Compile instructions: gcc project3_1.c –o project3_1.exe
**************************************************
* Pseudocode
*
* Begin
* 	Prompt User for 5 integers
	Get 5 integers
	if	Num1 is greater than each other digit
	Then 
		Set Num1 to maxNum
	Else
		if Num2 is greater than each other digit
		Then
			Set Num2 to maxNum
		Else
			if	Num3 is greater than each other digit
			Then 
				Set Num3 to maxNum
			Else
				if Num4 is greater than each other digit
				Then
					Set Num4 to maxNum
				Else
					Set Num5 to maxNum
				EndIf
			EndIf
		EndIf
	EndIf
	if	Num1 is less than each other digit
	Then 
		Set Num1 to minNum
	Else
		if Num2 is less than each other digit
		Then
			Set Num2 to minNum
		Else
			if	Num3 is less than each other digit
			Then 
				Set Num3 to minNum
			Else
				if Num4 is less than each other digit
				Then
					Set Num4 to minNum
				Else
					Set Num5 to minNum
				EndIf
			EndIf
		EndIf
	EndIf
	Print maxNum
	Print minNum
* End
*************************************************/
#include <stdio.h>

int main()
{ 													
	// Begin
	int Num1, Num2, Num3, Num4, Num5, maxNum, minNum;
	
	// Prompt User for 5 integers
	printf("Enter five integers in any order: ");
	
	// Get 5 integers
	scanf("%d %d %d %d %d", &Num1, &Num2, &Num3, &Num4, &Num5);
	
	// if Num1 is greater than each other digit
	if (Num1 > Num2 && Num1 > Num3 && Num1 > Num4 && Num1 > Num5)
	{
	// Set Num1 to maxNum
		maxNum = Num1;
	}else 
	{
	// if Num2 is greater than each other digit
		if (Num2 > Num3 && Num2 > Num4 && Num2 > Num5) 
		{ 
	// Set Num2 to maxNum
			maxNum = Num2;
		} else
		{
	// if Num3 is greater than each other digit
			if (Num3 > Num4 && Num3 > Num5) 
			{ 
	// Set Num3 to maxNum
				maxNum = Num3;
			} else
			{
	// if Num4 is greater than each other digit
				if (Num4 > Num5) 
				{ 
	// Set Num4 to maxNum
					maxNum = Num4;
				} else
				{
	// Set Num5 to maxNum
					maxNum = Num5;
				}
			}
		}
	}
	// if Num1 is less than each other digit
	if (Num1 < Num2 && Num1 < Num3 && Num1 < Num4 && Num1 < Num5)
	{
	// Set Num1 to minNum
		minNum = Num1;
	}else 
	{
	// if Num2 is less than each other digit
		if (Num2 < Num3 && Num2 < Num4 && Num2 < Num5) 
		{ 
	// Set Num2 to minNum
			minNum = Num2;
		} else
		{
	// if Num3 is less than each other digit
			if (Num3 < Num4 && Num3 < Num5) 
			{ 
	// Set Num3 to minNum
				minNum = Num3;
			} else
			{
	// if Num4 is less than each other digit
				if (Num4 < Num5) 
				{ 
	// Set Num4 to minNum
					minNum = Num4;
				} else
				{
	// Set Num5 to minNum
					minNum = Num5;
				}
			}
		}
	}
	
	// Print maxNum
	printf("Largest integer: %d\n", maxNum);
	
	// Print minNum
	printf("Smallest integer: %d", minNum);
	return 0;
} 							 // End