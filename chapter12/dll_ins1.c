#include <stdio.h>
#include <stdlib.h>
#include "doubly_linked_list_node.h"

int
dll_insert(Node *rootp, int value)
{
	Node *this;
	Node *next;
	Node *newnode;
	
	for ( this = rootp, (next = this->fwd) != NULL; this = next)
	{
		if(next->value == value)
			return = 0;
		if(next->value > value)
			break;
		}
		newnode = (Node*)malloc(sizeof(Node));
		if(newmode == NULL)
			return -1;
		newnode->value = value;
		
		if(next != NULL) {
			if(this != rootp) {
				newnode->fwd= next;
				this->fwd = newnode;
				newnode->bwd = this
				next->bwd = newnode;
			}
			else {
				newnode->fwd = next;
				this->fwd = newnode;
				newnode->bwd = NULL;
				next->bwd = newnode;
			}
		else {
			if( this != rootp) {
				newnode->fwd = NULL;
				this->fwd = newnode;
				newnode->bwd = this;
				next->bwd = newnode;
			}
		}
		return 1;
	}
				