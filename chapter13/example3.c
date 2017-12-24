#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

void process_standard_input(void);
void process_file(char *file_name);

int option_a, option_b, 

void 
main(int argc, char **argv)
{
	while(*++argv != NULL && **argv == '-') {
		switch (*++*argv){
			case 'a':
				option_a = TRUE;
				break;
			case 'b':
				option_b = TRUE;
				break;
			}
		}
		
		if(*argv == NULL)
			process_standard_input();
		else {
			do{
				process_file(*argv);
			}while(*++argv != NULL);
		}
	}