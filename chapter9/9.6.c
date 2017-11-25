#include <string.h>
#include <stdio.h>
char*
my_strcpy_end(char *dest, char *src, const int size )
{
	 strncpy(dest, src, size);
	 return (dest + size);
}

char *
my_strcpy_end(char *dest, char *src)
{
	strcpy(dest, src)
	return dest + strlen(dest);
}

char *
my_strcpy_end(register char *dest, register char *src)
{
	while( (*dest ++ = *src++) != '\0')
	return dest -1;
}
