#include <stdio.h>
#include <stdlib.h>

int
find_value(Node *first, int value)
{
	for(;first != NULL; first = first->link)
		if(first->value == value)
			return first;
		return NULL;
}
