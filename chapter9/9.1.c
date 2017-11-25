#include <string.h>
#include <ctype.h>
#include <stdio.h>

int n_ctrl;
int n_space;
int n_digit;
int n_lower;
int n_upper;
int n_punct;
int n_nprint;
int total;

int main()
{
	int ch;
	int category;
	while( (ch = getchar()) != EOF) {
		total += 1;
	if(iscntrl(ch))
		n_ctrl ++;
	if(isspace(ch))
		n_space++;
	if(isdigit(ch))
		n_digit++;
	if(isupper(ch))
		n_upper++;
	if(islower(ch))
		n_lower++;
	if(ispunct(ch))
		n_punct++;
	if(!isprint(ch))
		n_nprint++;
	
	if(total == 0)
		printf( " No characters in the input!\");
	else {
		print( "%3.0f %% %s control characters \n", n_cntrl * 100.0 / total);
		}
		
		return EXIT_SUCCESS;
}