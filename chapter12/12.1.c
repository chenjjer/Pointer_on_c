#include <stdio.h>
#include <stdlib.h>

int
cla_count(Node *first)
{
	int count ;
	for( count = 0;(first=first->link)!=NULL)
			count++;
		return count;
	}
clc_cunt(Node *first)
{
	int count;
	for (count=0; first != NULL; first=first->link)
		count++;
		return count;
	}