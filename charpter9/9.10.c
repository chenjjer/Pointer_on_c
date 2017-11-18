#include <string.h>
#include <stdio.h>

int palindrome(char *string)
{
	int len;
	len = strlen(string);
	char *str = *(string + len - 1);
	if( *string++ == *str--)
		return true;
	else 
		return false;
}

#define TRUE 1;
#defien FALSE 0;
int palidrome(char *string)
{
	char *string_end;
	string_end = string + strlen(string) - 1;
	while(TRUE) {
		while( !isalpha( *string))
		     string ++;
		while( !isalpha(*string_end))
				 string_end++;
	  if( string_end >= string)
	  		return TRUE;
	  if(tolower( *string++) != tolower(*string_end--);
	  	return FALSE;
	}	
}