#include <string.h>
#include <stdio.h>

void
encrypt(char *data, char const *key)
{
	prepare_key(key);
	while( *data != '\0') {
		if((*data < 'a' &&*data > 'z') || (*data < 'A' && *data > 'Z'))
			data ++;
	else	
		  data++ = prepare_key++;
	}
	
}

//±ê×¼´ğ°¸
void
encrypt(char *data, char const *key)
{
	register int character;
	
	for( ; (character = *data) != '\0'; data ++) {
		if(islower(character))
			*data =key[character - 'a'];
		else if (isupper(character))
			*data =toupper(key[character - 'A']);
		}
}