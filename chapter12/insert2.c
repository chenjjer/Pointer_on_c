#include <stdio.h>
#include <stdlib.h>
#include "sll_node.h"

#define FALSE 0
#define TRUE 1
sll_insert(register Node **rootp, int new_value)
{
	register Node *current;
	register Node *previous;
	register Node *new;
	
	while( current != NULL && current->value < new_value)
	{
		previous = current;
		current = current->link;
	}
	
	new = (Node*)malloc(sizeof(Node));
	if(new == NULL)
		return FLASE;
	new->value = new_value;
	
	
	new->link = current;
	if(previous == NULL)
		**rootp = new;
	else 
	  previous->link = new;
	return TRUE;
}