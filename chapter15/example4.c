#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_A 1
#define DEFAULT_B 2

void 
function(char *buffer)
{
	int a, b, c;
	
	if(sscanf(buffer, "%d %d %d", &a, &b, &c) != 3) {
		a= DEFAULT_A;
		if(sscanf(buffer, "%d %d", &b, &c) != 2) {
			b = DEFAULT_B;
			if(sscanf(buffer, "d", &c) != 1) {
				fprintf(stderr, "bad input format", buffer);
				exit(EXIT_FAILURE);
			}
		}
	}
}