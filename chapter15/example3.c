#include <stdio.h>

#define BUFFER_SIZE 100

void 
function(FILE *input)
{
	int a, b, c, d, e;
	
	char buffer[BUFFER_SIZE];
	while (fgets(buffer, BUFFER_SIZE, input) != NULL) {
		if(sscanf(buffer, "%d %d %d %d ", &a, &b, &c, &d, &e) != 4) {
			fprintf(stderr, "bad input skipped: %s", buffer);
			continue;
		}
	}
}