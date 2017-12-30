#include <stdio.h>
#include <stdblib.h>
extern int palidrome(char *string)

int
numeric_palidrome(int value)
{
	char string[50];
	
	sprintf(string, "%d", value);
	
	return palidrome(string);
}