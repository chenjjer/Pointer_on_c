#include <stdio.h>
#include <string.h>

int main()
{
	int ch;
	while( (ch = getchar()) != EOF)
		putchar(tolower(ch));
}