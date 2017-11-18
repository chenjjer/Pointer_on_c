#include <string.h>
char *
my_strcpy(char *dst, char *src, char const size)
{
	strncpy(dst, src, size);
	dst[size-1] = '\0';
	return dst;
	}