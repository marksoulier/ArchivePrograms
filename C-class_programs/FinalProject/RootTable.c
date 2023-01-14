#include "myLinkedList.h"

/*************************************************
* Function Title: Main
*
* Summary: read a list of integers 1-99 from a input file, print
to a output file the integers in accending order without duplicates
with their respective squareroot, cuberoot, and forthroot
*
* Inputs: a input file contining list of integers 1-99
* Outputs: a output text file containing list of integers in order
with repective squareroot, cuberoot, and forthroot
*
* Compile instructions: makefile
**************************************************
* Pseudocode
*
* Begin
	open input file
	place into linked list
	open output file
	print out linked list to output file
	free the linked list
	close the files
* End
*************************************************/

int main(int argc, char *argv[])
{
	FILE *inptr, *outptr;
	struct node *first = NULL;
//open input file
	inptr = fopen(argv[1], "r");
	if (inptr == NULL){
		printf("Input file is invalid");
		exit(1);
	}
//place into linked list
	first = add_to_list(first, inptr);
//open output file
	outptr = fopen(argv[2], "w");
	if (outptr == NULL){
		printf("Output file is invalid");
		exit(1);
	}
//print out linked list to output file
	read_from_list(first, outptr);
//free the linked list
	free_linked_list(first);
//close the files
	fclose(inptr);
	fclose(outptr);
	return 0;
}