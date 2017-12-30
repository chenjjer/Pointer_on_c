#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256 // must consider the NULL 

int main()
{
	char buf[MAX_LINE_LENGTH];
	while(fgets(buf, MAX_LINE_LENGTH, stdin) != NULL)
		fputs(buf, stdout);
	return EXIT_SUCCESS;
}