#include <stdlib.h>
#include <stdio.h>
#include "doubly_liked_list_node.h"

struct NODE *sll_reverse(struct NODE *first)
{
	NODE *previous;
	NODE *current;
	
	previous = fisrt;
	
	for(previous = first; (current = previous->link) != NULL; )
	{
		if(previous->value < current->value)
		{
				previous->link = current->link;
				current->link = previous;
		}
	}
		if(current->link = NULL)
			first = NULL;
		return first;
}

struct NODE *
sll_reverse(struct NODE *current)
{
	struct NODE *previous;
	struct NODE *next;
	
	for(previous = NULL; current != NULL; current = next) {
		next = current->link;
		current->link = previous;
	  previous = current;
 }
 return previous;
}
		
	