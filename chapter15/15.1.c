#include <stdio.h>
#include <stdlib.h>

main()
{
	int ch;
	while ((ch=getchar()) != EOF)
		putchar(ch);
	return EXIT_SUCCESS;
}