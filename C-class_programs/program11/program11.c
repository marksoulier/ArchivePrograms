#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

/*************************************************
* Function Title: Main
*
* Summary: This program uses the 
*
* Inputs: various numbers and operands
* Outputs: the result of the stack at the end
*
* Compile instructions: use makefile
**************************************************
* Pseudocode
*
* Begin
	prompt the user for the operations
	scan each input
	test for each type of input
	terminate iteration when equals
	end program if charecter
* End
*************************************************/

int main(void)
{
	int num, result;
	char arg, throwaway;
	int first, second;
	int terminate, end = 1;
//prompt the user for the operations
	while(end)
	{
		make_empty();
		printf("Enter an RPN expression: ");
		terminate = 1;
		while(terminate)
		{
//scan each input
			scanf("%c", &arg);
			scanf("%c", &throwaway);
//test for each type of input
			switch (arg) 
			{
				case '+':
					if(is_empty()){
						printf("Not enough operands in expression");
						terminate = 0;
						end = 0;
					}else{
					second = pop();
					first = pop();
					result = first + second;
					push(result);
					}
					break;
				case '-':
					if(is_empty()){
						printf("Not enough operands in expression");
						terminate = 0;
						end = 0;
					}else{
					second = pop();
					first = pop();
					result = first - second;
					push(result);
					}
					break;
				case '*':
					if(is_empty()){
						printf("Not enough operands in expression");
						terminate = 0;
						end = 0;
					}else{
					second = pop();
					first = pop();
					result = first * second;
					push(result);
					}
					break;
				case '/':
					if(is_empty()){
						printf("Not enough operands in expression");
						terminate = 0;
						end = 0;
					}else{
					second = pop();
					first = pop();
					result = first / second;
					push(result);
					}
					break;
				case '=':
//terminate iteration when equals
					if(is_full()){
						printf("Expression is too complex");
						terminate = 0;
						end = 0;
					}else{
					printf("Value of expression: %d\n", pop());
					terminate = 0;
					}
					break;
				case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7':
				case '8': case '9':
					num = arg - 48;
					push(num);
					break;
				default:
//end program if charecter
					terminate = 0;
					end = 0;
					break;
			}
		}
	}
	return 0;
}