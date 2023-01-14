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

int main()
{ 							 // Begin
	int islandNum, coupons, money;
	int N;
	int testmax;
	int max;
	
	scanf("%d", &money);
	scanf("%d", &coupons);
	scanf("%d", &N);
	int cost[N];
	for( i = 0; i < N; i++)
		scanf("%d", &cost[i]);

	
	#spend all money then all coupons
	#spend all money besides the last possible one and pay coupon then use money then rest of coupons
	#spend all money besides last one and pay 2 coupons then money if possible then rest of coupons
	#repeat till have used x amount of coupons
	#
	

	return 0;
} 							 // End