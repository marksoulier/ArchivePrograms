#include "myLinkedList.h"

/*************************************************
* Function Title: read_from_list
*
* Summary:print the linked list of integers to a output file 
with their respective squareroot, cuberoot, and forthroot
*
* Inputs: a path to the output file and path to the top of the linked list
* Outputs: a file contining the linked list integers with respective 
squareroot, cuberoot, and forthroot
*
* Compile instructions: makefile
**************************************************
* Pseudocode
*
* Begin
	create a copy path of front of linked list
	print out each nodes integer with respective sqrt, cubrt, 4throot
* End
*************************************************/


void read_from_list(struct node *list, FILE *ptr)
{
//create a copy path of front of linked list
	struct node *nodeptr = list;
//print out each nodes integer with respective sqrt, cubrt, 4throot
	while (nodeptr != NULL){
		fprintf(ptr, "%d\t%.4f\t%.4f\t%.4f\n", nodeptr->n, sqrt(nodeptr->n), cbrt(nodeptr->n), sqrt(sqrt(nodeptr->n)));
		nodeptr = nodeptr->next;
	}
}

/*************************************************
* Function Title: free_linked_list
*
* Summary:frees the memory used by the linked list back to usable memory
*
* Inputs: a path to the front of the linked list
* Outputs: none
*
* Compile instructions: makefile
**************************************************
* Pseudocode
*
* Begin
	create 2 paths
	free memory of previous pointer
* End
*************************************************/

void free_linked_list(struct node *first)
{
//create 2 paths
	struct node *cur = NULL;
	struct node *prev = NULL;
	for (cur = first, prev = NULL; cur != NULL; prev = cur, cur = cur->next)
//free memory of previous pointer
		free(prev);
}

/*************************************************
* Function Title: add_to_list
*
* Summary: creates a linked list given a file of integers 0-99 and creates a 
linked list without duplicates and in accending order
*
* Inputs: a path to an input file with integers 0-99 and a node pointing to start of list
* Outputs: a linked list with the integers in accending order without duplicates
*
* Compile instructions: makefile
**************************************************
* Pseudocode
*
* Begin
	create 2 pointers
	read integers from file till end
	find place for number in accending order in list
	make first node if none exist
	make new node if number doesnt exist
	make first to front if node is made in front
* End
*************************************************/

struct node *add_to_list(struct node *first, FILE *fptr)
{
	int number;
//create 2 pointers
	struct node *cur = NULL;
	struct node *prev = NULL;
//read integers from file till end
	while(!feof(fptr))
	{
		fscanf(fptr, "%d", &number);
//find place for number in accending order in list
		for (cur = first, prev = NULL; cur != NULL && cur->n < number; prev = cur, cur = cur->next)
			;
//make first node if none exist
		if(cur == NULL){
			struct node *new_node;
			new_node = malloc(sizeof(struct node));
			if (new_node == NULL) {
				printf("Error: malloc failed in add_to_list\n");
				exit(1);
			}
			new_node->n = number;
			new_node->next = cur;
			if (prev == NULL){
				first = new_node;
			}else{
				prev->next = new_node;
			}
		}else{
//make new node if number doesnt exist
			if (cur->n != number)
			{
				struct node *new_node;
				new_node = malloc(sizeof(struct node));
				if (new_node == NULL) {
					printf("Error: malloc failed in add_to_list\n");
					exit(1);
				}
				new_node->n = number;
				new_node->next = cur;
				if (prev == NULL){
//make first to front if node is made in front
					first = new_node;
				}else{
					prev->next = new_node;
				}
			}
		}
	}
	return first;
}
