#include <string.h>
#include <stdio.h>
char *
my_strnchr(char *str, int ch, int which)
{
	char *answee = NULL
	while(--which >= 0 && (answer = strchr(str, ch)) != NULL)
	  str = answer + 1;
	return answer;
}