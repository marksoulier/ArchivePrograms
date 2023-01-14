#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct node {
	int n;
	struct node *next;
};

void read_from_list(struct node *list, FILE *ptr);
void free_linked_list(struct node *first);
struct node *add_to_list(struct node *first, FILE *fptr);

#endif