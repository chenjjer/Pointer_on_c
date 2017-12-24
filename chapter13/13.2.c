#include <stdlib.h>
#include <stdio.h>

Node *
Traverse_list(Node *first, &Traverse(first->next))
{
	while(Traverse(first->next) == NULL)
		break;
}

Node *
Traverse(Node *Search)
{
	Search= Search->next;
	return  Search;
}

/*
* standard code
*/

#include "node.h"
#include <stdio.h>

void
sll_traverse(Node *current, void (*func)(Node *node) ) {
	while(current != NULL) {
		func(current);
		current = current->link;
	}
}