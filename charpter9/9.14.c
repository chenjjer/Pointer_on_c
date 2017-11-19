#include <string.h>
#include <stdio.h> 

void
decrypt(char *data, char const *key)
{
	register int character;
	
	for(; (character = *data ) != '\0'; data ++) {
		if( islower(data))
			*data = alphabet[strchr(key, character) - key];
		else if (isupper(data))
			*data = toupper(alphabet[strchr(key, character) - key]);
}