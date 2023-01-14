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

#define Size 5


int main()
{ 							 // Begin

int i, Num, Sum, Pro;
int array[5] = {0};
Sum = 0;
Pro = 1;
printf("Please enter 5 integers: ");
for (i = 0; i < Size; i++) {
	scanf("%d", &array[i]);
}

for ( i= 0; i < Size; i++) {
	Num =array[i];
	Sum += Num;
}
printf("sum of array: %d\n", Sum);

for (i = 0; i < Size; i++) {
	Num = array[i];
	Pro = Pro*Num;
}
printf("Product of array: %d", Pro);

	return 0;
} 							 // End