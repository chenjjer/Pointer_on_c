#include<stdlib.h>
#include<stdio.h>
#include"doubly_liked_list_node.h"

int
dll_ins(register Node *rootp, int value) 
{
	register Node *this;
	register Node *next;
	register Node *newnode;
	
	for(this = rootp, (this->fwd = newnode ) != NULL, this = next){
		if(next->value = value) 
			return 1;
		if(next->value > value)
			break;
		}
		newnode = (Node*)malloc(sizeof(Node));
		if(newnode = NULL)
			return -1;
		newnode->value = value;
		
		newnode->fwd = next;
		this->fwd = newnode;
		
		if(this != rootp)
			newnode->bwd = this;
		else
			newnode->bwd = NULL;
		
		if(next != NULL)
			next->bwd = newnode;
		else
			rootp-bwd = rootp;
			
			return 1;
		}