#include <stdio.h>
#include <stdlib.h>
#include "singly_linked_list_node.h"

int sll_remove(struct NODE **rootp, struct NODE *node)
{
	struct NODE *current;
	
	while((current = *rootp) != NULL)
	{
		if(current->link = node)
			current->link = node->link;
		else
			return 0;
	}
}
//

#include <stdlib.h>
#include <stdio.h>
#include "singly_linked_list_node.h"

#define FALSE 0
#define TRUE 1

int
sll_remove(struct NODE **rootp, struct NODE *node)
{
	register NODE *current;
	
	assert(node != NULL);
	
	while((current = *rootp) != NULL && current != node )
	      rootp = &current->link;
	   if(current == node)
	   	{
	   		*rootp = current->link;
	   	free(current);
	   	return TRUE;
		}
		else
			return FALSE;
		}
			   	
	   	
	   	
	   	 