#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

struct node {
	float number;
	struct node *next;
}

int main(int argc, char *argv[])
{
	FILE *ptr, *fptr;
	float number;
	number = 0;
	
	fptr = fopen(argv[1], "r");
	if (fptr == NULL){
		printf("File is invalid");
		exit(1);
	}
	while(!feof(fptr))
	{
		fscanf(fptr, "%f", &number);
//place into linked list

	}
	
	ptr = fopen(argv[2], "w");
	if (ptr == NULL){
		printf("File is invalid");
		exit(1);
	}
	//print out linked list
	
	fprintf(ptr, "%.0f\t%f\t%f\t%f", number, sqrt(number), cbrt(number), sqrt(sqrt(number)));
	
	fclose(fptr);
	fclose(ptr);
	
	return 0;
}