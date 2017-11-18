int del_substr( char *str, char const *substr)
{
	char *next;
	while(*str != NULL ) {
		next = match (str, substr);

				break;
		str++;
	}
	if( *str == NULL)
		return FALSE;
	while ( *str ++= *next ++)
		return  TRUE;
	}

// This soluation has two function for clarity. Bacuse it is only 
//called once, the match function could also have been written in-line
#define NULL 0
#define NUL '\0'
#define TRUE 1
#define FALSE 0

char *
match(char *str, char *want)
{
	while ( *want != NULL)
		if(*str ++ != *want ++)
			return NULL;
		else
			return str;
}
int del_
