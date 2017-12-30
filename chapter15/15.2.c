#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH  80
 int copylines(FILE *input, FILE *output)
{

	char buffer[MAX_LINE_LENGTH];
	while (fgets(buffer,MAX_LINE_LENGTH, input) != EOF)
		fputs(buffer, output);
	return EXIT_SUCCESS;
	
}
// THE Standard the answers, why think so complex
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 81 // must consider the NULL 

int main()
{
	char buf[MAX_LINE_LENGTH];
	while(gets(buf) != EOF)
		puts(buf);
	return EXIT_SUCCESS;
}