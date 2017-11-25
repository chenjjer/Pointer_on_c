#include <string.h>
#include <stdio.h>

int 
count_chars(char const *str, char const *chars)
{
	char buffer[];
	int len;
	while((*str) != NULL)
	*buffer++ = *str++;
	len = strpan(buffer , chars)
	return len;
}
// 
int count_chars(char const *str, char const *chars)
{
	int count = 0;
	
	while((str=strpbrk(str, chars)) != NULL) {
		count ++;
		str ++;
	}
	
	return count;
}