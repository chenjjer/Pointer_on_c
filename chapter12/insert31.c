#include <stdlib.h>
#include <stdio.h>
#include "sll_node.h"

int 
sll_insert(Node **linkp, int new_value)
{
	register Node *new;
	
	while( (*linkp) != NULL && (*linkp)-> value < new_value)
			linkp = &(*linkp)->link;

	new = (Node *)malloc(sizeof(Node));
	if(new == NULL)
		return 0;
	new->value = new_value;
	
	new->link = *linkp;
	*linkp = new;

	return 1;
}
	