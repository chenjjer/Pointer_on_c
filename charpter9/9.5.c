#include <string.h>
#include <stdio.h>

void
my_strncat( char *dest, char *src, int dest_len)
{
	int length;
	length = dest_len - (int)strlen(dest) + 1;
	if(length >0 ) {
		strncat(dest+len, src, dest_len);
	}
}
	