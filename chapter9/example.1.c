#include <string.h>
size_t
strlen( char const *string)
{
	int length;
	for (lenth = 0; *string++ != '\0'; length++);
	return length;
}