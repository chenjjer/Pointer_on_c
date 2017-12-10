#include <stdio.h>
#include <stdlib.h>
#include "sll_node.h"

int 
sll_insert( register Node **linkp, int new_value)
{
	register Node *current;
	register Node *new;
	/*
	while((current != NULL) && currernt->value  new_value)
	{
		*linkp = current;
		current = &current->link;
	}
	*/
	while((current = *linkp) != NULL &&
					current->value < new_value)
					linkp = &current->link;

	new = (Node*)malloc(sizeof(Node));
	if(new ==  NULL)
		return false
	
   new->value = new_value;
   
   new->link = current;
   *linkp = new;
   
   return true;
 }