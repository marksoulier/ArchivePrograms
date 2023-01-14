#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[])
{ 							 
// Begin
	int num = 5;
	FILE *ptr, *ptrtwo;
	char c;
	ptrtwo = fopen(argv[2], "r");
	if(ptrtwo == NULL)
	{
      printf("Error!");   
      exit(1);             
	}
	ptr = fopen(argv[1],"w");
	if(ptr == NULL)
	{
      printf("Error!");   
      exit(1);             
	}
	fprintf(ptr,"%d, %d\n", num, num*num);
	fclose(ptr);
	fclose(ptrtwo);
	return 0;
} 							 // End