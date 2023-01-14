#include <stdio.h>

void math(int fir, int sec, int* s, int* d, int* p, int* q);

/*************************************************
* Function Title: Main
*
* Summary: 
*
* Inputs: 
* Outputs: 
*
* Compile instructions: gcc hello.c –o hello.exe
**************************************************
* Pseudocode
*
* Begin

* End
*************************************************/

int main()
{ 							 // Begin
	int first, second, sum, diffrence, product, quotient;
	printf("Please input 2 integers: ");
	scanf("%d", &first);
	scanf("%d", &second);
	math(first, second, &sum, &diffrence, &product, &quotient);
		
	printf("The sum is: %d\n", sum);
	printf("The diffrence is: %d\n", diffrence);
	printf("The product is: %d\n", product);
	printf("The quotient is: %d\n", quotient);
	return 0;
} 							 // End


/*************************************************
* Function Title: function
*
* Summary: 
*
* Inputs: none
* Outputs: none
*
* Compile instructions: NA
**************************************************
* Pseudocode
*
* Begin

* End
*************************************************/

void math(int fir, int sec, int* s, int* d, int* p, int* q){
	*s = fir + sec;
	*d = fir - sec;
	*p = fir * sec;
	*q = fir / sec;
}