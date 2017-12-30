#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256 // must consider the NULL 

FILE *openfile(char *prompt, char *mode)
{
	char buf[MAX_LINE_LENGTH];
	FILE *file;
	printf("%s filename?", prompt);
	if(gets(buf) == NULL) {
		fprintf(stderr, "Miss %s filemane.\n", prompt);
		exit(EXIT_FAILURE);
	}
	if((file = fopen(buf, mode)) == NULL) {
		perror(buf);
		exit (EXIT_FAILURE);
	}
	
	return file;
}

int main()
{
	char buf[MAX_LINE_LENGTH];
	FILE *input;
	FILE *output;
	FILE *openfile;
	
	input = openfile("Input", "r");
	output = openfile("Output", "w");
	int value, total = 0;
	
	while(fgets(buf, MAX_LINE_LENGTH, input) != NULL) {
		if(sscanf(buf, "%d", &value) == 1)
			total += value;
		fputs(buf, output);
	return EXIT_SUCCESS;
}