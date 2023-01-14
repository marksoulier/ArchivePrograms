#include <stdio.h>

int main(void) {
	int D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12;
	printf("Enter the first digit: ");
	scanf("%d", &D1);
	printf("Enter the first set of 5 digits: ");
	scanf("%1d%1d%1%1d%1d", &D2, &D3, &D4, &D5, &D6);
	printf("Enter the second set of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &D7, &D8, &D9, &D10, &D11);
	D12 = 9 - (((D1 + D3 + D5 + D7 + D9 + D11) * 3
	+ (D2 + D4 + D6 + D8 + D10) - 1) % 10);
	printf("The check digit is: %d", D12);
	return 0;
}