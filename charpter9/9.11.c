#include <string.h>
#include <stdio.h>

char const whitespace[] = "\n\r\f\t\v";

int
main()
{
	char buffer[100];
	int count;
	count = 0;
	
	while(get(buffer)) {
		char *word;
		for(word = strtok(buffer, whitespace);
			word != NULL;
			word =strtok(NULL, whitespace)) {
				if(strcmp(buffer, "the") == 0)
					count ++;
				}
			}
			printf("%d\n", count);
			
			return EXIT_SUCCESS;
	}