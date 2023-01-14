#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens,
 int *fives, int *twos, int *ones);

/*************************************************
* Function Title: Main
*
* Summary: Prints the change of fewest number of bills
			to make up a integer amount
*
* Inputs: a integer value of money
* Outputs: prints the number of each type of bills
*
* Compile instructions: gcc program8.c -o program8.exe
**************************************************
* Pseudocode
*
Begin
	Print prompt
	Get a positive integer amount from user
	Call the pay_amount function on the amount
	print the value of each type of bill
End
*************************************************/

int main()
{ 						
//Begin
	int twenties, tens, fives, twos, ones, amount;
//Print prompt
	printf("Enter an amount to be broken into bills: $");
//Get a positive integer amount from user
	scanf("%d", &amount);
	twenties = tens = fives = twos = ones = 0;
//Call the pay_amount function on the amount
	pay_amount(amount, &twenties, &tens, &fives, &twos, &ones);
	printf("The following numbers of the specified bills are required:\n");
//print the value of each type of bill
	printf("$20: %d\n", twenties);
	printf("$10: %d\n", tens);
	printf("$5: %d\n", fives);
	printf("$2: %d\n", twos);
	printf("$1: %d\n", ones);
	return 0;
//End
} 							 



/*************************************************
* Function Title: pay_amount
*
* Summary: Prints the pay amount in bills for any integer amount in
bills of type: twenty, ten, five, two, and one
*
* Inputs: the amount and the address to each variable 
storing the amount of bills
* Outputs: the amount of bills of each type to its respective variable 
*
* Compile instructions: none
**************************************************
* Pseudocode
*
Begin
	start all amounts at 0
	test each type of bill
	if greater than current dollars
		decrement dollars by the respective amount
	send the amount of each bill to its variable
End
*************************************************/

void pay_amount(int dollars, int *twenties, int *tens,
 int *fives, int *twos, int *ones)
{
//Begin
	int twen, ten, five, two, one;
//start all amounts at 0
	twen = ten = five = two = one = 0;
//test each type of bill
//if greater than current dollars
//decrement dollars by the respective amount
	while(dollars >= 20){
		twen += 1;
		dollars -= 20;
	}
	while(dollars >= 10){
		ten += 1;
		dollars -= 10;
	}
	while(dollars >= 5){
		five += 1;
		dollars -= 5;
	}
	while(dollars >= 2){
		two += 1;
		dollars -= 2;
	}
	while(dollars >= 1){
		one += 1;
		dollars -= 1;
	}
//send the amount of each bill to its variable
	*twenties = twen;
	*tens = ten;
	*fives = five;
	*twos = two;
	*ones = one;
	return;
//End
}