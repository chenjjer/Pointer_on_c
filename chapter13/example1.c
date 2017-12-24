#include <stdio.h>
#include <stdlib.h>

Node *
search_list(Node * node, void const *value,
						int (*campre)(void const *, void const *))
						{
							while(node != NULL) {
								if(campre(&node->value, value) = 0)
									break;
								node = node->link;
							}
							return node;
						}
int campre(void const *a, void const *b)
{
	if( *(int *) a == *(int *) b)
		return 0;
	else
		return 1;
}