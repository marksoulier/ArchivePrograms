#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct node {
	int n;
	struct node *next;
};
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
	Inicilize a current pointer
	inicilize a previous pointer
	Loop through list till matching last_name or fisrt name
	for (cur = first, prev = NULL; cur != NULL && strcmp(cur->first_name, first_name) == 0 && strcmp(cur->last_name, last_name) == 0; prev = cur, cur = cur->next)
			;
	check if not in list
	check if current pointer is equal to NULL
		print to screen error of no student in list
		return first
	if( previous pointer == NULL)
		set first = first->next
	else
		set previous next pointer to the next pointer of current
		free the current pointer
	endif
		return first
	
* End
*************************************************/
struct person {
	struct {
		float height, weight;
		int age;
		char *name;
	} b;
	union {
		struct {
			int grade, room;
		} teacher;
		float gpa;
	} u;
	enum {TCHR, STDNT} kind;
} p;

unsigned int func(unsigned int x, unsigned int y){
	if (x == y){
		return x;
	}
	else {
		if (x < y){
			return func(x, y-x);
		}
		else {
			return func(x-y, y);
		}
	}
}

struct student {
	char *first_name;
	char *last_name;
	struct student *next;
};



int main(int argc, char *argv[])
{ 							 // Begin
	
	/*
	FILE *inptr, *outptr;
	struct node *first = NULL;
	
	inptr = fopen(argv[1], "r");
	if (inptr == NULL){
		printf("Input file is invalid");
		exit(1);
	}
	while(!feof(fptr))
	{
		fscanf(fptr, "%d", &number);
	}
	*/
	//printf("%d", func(3,11));

	

	
/*	
	p.kind= TCHR;
	p.u.teacher.room = 5;
	//p.height = 50.5f;
	p.b.name = "name";
	printf("%s", p.b.name);
	p.u.gpa = 3.14;
*/	
	return 0;
}							 // End