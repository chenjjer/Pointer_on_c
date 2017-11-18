#include <string.h>
#include <stdio.h>

char *
my_strcat(char *dst, char *src, int size)
{
	int length;
	size --;
	length = size - (int)my_strlen(dst,size);
	if( length > 0 ) {
		strncat(dst, src, size);
		dst[size] = '\0';
	}
	return dst;
}