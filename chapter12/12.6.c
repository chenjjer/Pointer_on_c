#include <stdlib.h>
#include "doubly_linked_list_node.h"

int
dll_remove(struct NODE *rootp, struct NODE *node)
{
	struct NODE *current;
	
	while( (current = rootp->fwd ) != NULL && current != node)
	      rootp = current;
	    if( current == node)
	    	{
	    		current->fwd = rootp->fwd;
	    		rootp = current->fwd->bwd;
	    		
	    		free(current)
	    		return TURE;
	    	}
	    	else
	    		return FLASE;
}
//
int
dll_remove(struct NODE *rootp, struct NODE *node)
{
	struct NODE *current;
	
	assert(node != NULL);
	
	for( current = rootp->fwd; current != NULL; current = current->fwd)
			if(current == node)
					break;
	if( current == node) {
		if(current->bwd == NULL)
			rootp->fwd = current->fwd;
		else
			current->bwd->fwd = current->fwd;
		
   if( current->fwd == NULL)
   	  rootp->bwd = current->bwd;
   	else
   		current->fwd->bwd = current->bwd;
   	free(this);
   	
   	return true;
  }
  else
  	return false;
  }