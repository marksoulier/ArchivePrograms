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

int main(int argc, char* argv[])
{ 							 // Begin
	FILE *infile, *outfile;
	int num;
	
	infile = fopen(argv[1], "r");
	if (infile == NULL){
		printf("ERROR");
		exit(1);
	}
	
	outfile = fopen(argv[2], "w");
	if (outfile == NULL){
		printf("ERROR");
		exit(1);
	}
	
	while((fscanf(infile, "%d", &num)) != EOF){
	}
	return 0;
}