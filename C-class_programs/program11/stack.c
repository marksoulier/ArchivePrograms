#include <stdbool.h>
#include <stdio.h>
#include "stack.h"
#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;
int j;

/*************************************************
* Function Title: make_empty
*
* Summary: set top to 0 so the stack can be reset

* Inputs: void
* Outputs: void

* Compile instructions: use makefile
**************************************************
* Pseudocode
*
* Begin
	set top to 0
* End
*************************************************/

void make_empty(void)
//Begin
{
//set top to 0
	top = 0;
//End
}

/*************************************************
* Function Title: is_empty
*
* Summary: return a boolean if top is at the beggining two slots

* Inputs: void
* Outputs: a boolean value of 1 if top is at the beggining two slots

* Compile instructions: use makefile
**************************************************
* Pseudocode
*
* Begin
	 return a boolean value of 1 if top is at the beggining two slots
* End
*************************************************/

int is_empty(void)
{
//Begin
//return a boolean value of 1 if top is at the beggining two slots
	return top <= 1;
}
//End

/*************************************************
* Function Title: is_full
*
* Summary: return a boolean if the stack is full

* Inputs: void
* Outputs: a boolean value of 1 if the stack is full

* Compile instructions: use makefile
**************************************************
* Pseudocode
*
* Begin
	 return a boolean value of 1 if the stack is full
* End
*************************************************/

int is_full(void)
{
//Begin
//return a boolean value of 1 if the stack is full
	return top == STACK_SIZE;
}
//End

/*************************************************
* Function Title: push
*
* Summary: return a boolean if the stack is full

* Inputs: the result to place on the stack
* Outputs: void

* Compile instructions: use makefile
**************************************************
* Pseudocode
*
* Begin
	set the top of the stack to this value
* End
*************************************************/

void push(int i)
//Begin
{
//set the top of the stack to this value
	contents[top++] = i;
}
//End

/*************************************************
* Function Title: pop
*
* Summary: return the top value of the stack

* Inputs: void
* Outputs: the top value of the stack

* Compile instructions: use makefile
**************************************************
* Pseudocode
*
* Begin
	return the top value of the stack
* End
*************************************************/

int pop(void)
//Begin
{
//return the top value of the stack
	return contents[--top];
}
//End