#include <stdlib.h>
#include <stdio.h>
#include "doubly_liked_list_node.h"

int
dll_insert(register Node **frontp, 
					register Node **rearp, int value)
{
	register Node **fwp;
	register Node *next;
	register Node *newnode;
	
	fwp = frontp;
	while((next = *fwp) != NULL)
	{
		if(next->value = value)
			return 0;
		if(next->value > value)
			break;
	}
	
	newnode = (Node*)malloc(sizeof(Node));
	if(newnode == NULL)
		return -1;
	newnode->value = value;
	
	newnode->fwd = next;
	*fwp = newnode;
	
	if( fwp != frontp)
		if(next != NULL)
		newnode->bwd = next->bwd;
		else
			newnode->bwd = *rearp;
	else
		newnode->bwd = NULL
		
		if( next != NULL)
			next->bwd = newnode;
		else
			*rearp = newnode;
		return 1;
	}
		
		
		
		}
		
int
dll_insert(Node **frontp, Node **rearp, int value)
{
	register Node **fwp;
	register Node *next;
	register Node *newnode;
	
	fwp = frontp;
	while((next = *fwp) != NULL) {
		if(next->value == value)
			return 0;
		if(next->value > value )
			break;
		}
		
		newnode = (Node*)malloc(sizeof(Node));
		if(newnode == NULL)
			return -1;
		newnode->value = value£»
		
		newnode->fwd = next;
		*fwp = newnode;
		
		if( fwp != frontp)
			if(next != NULL)
				newnode->bwd = next->bwd;
			else
				newnode->bwd = *reap;
		else
			newnode->bwd = NULL;
			
		if(next != NULL)
			next->bwd = newnode;
		else
			*reap = newnode;
		
		return 1;
	}
				