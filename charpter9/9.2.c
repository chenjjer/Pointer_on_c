#include <stdio.h>
#include <string.h>
char * my_strlen(char const *string, int size)
{
	 register int length;
	for(length = 0; length < size , length ++)
	if(*string ++ == '\0')
		break;
	return length;
}
	