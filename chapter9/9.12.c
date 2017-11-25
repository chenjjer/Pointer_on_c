#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int
prepare_key(char *key)
{
	char buffer[];
	char Table = {A, B, C, D, E, F, G, H, I, J, K, L,
								M, N, O, P, Q, R, S, T, U, V, W, X, 
							Y,Z};
	toupper(*key);
	for(i=0; i<strlen(key); i++) {
		for(j=0; j<strlen(key);j++) {
			if(strcmp(key[i],key[j]) == 0) {
				key[j] = key[j+1];
			}
		}
	}
	for(i = 0; key[i] !=NULL; i++) {
		for(int j=0; j < 26; j++) {
		if( key[i] = Table[j]) {
			Table[j] = Table[j+1];
		}
	}
}
	strcat(key[i], Table[j])
	return key[i];
}
/*
*±ê×¼´ð°¸
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0

int
prepare_key(char *key)
{
	register char *keyp;
	register char *dup;
	register int character;
	
	if( *key == '\0')
		return FALSE;

	for(keyp = key; (character = *keyp) != '\0'; keyp++) {
		if( !islower(character)) {
			if(!isupper(character))
				return FASLE;
			*keyp = toupper(character);
		}
	
	for(keyp = key; (character = *keyp) != '\0'; ) {
		dup == ++keyp;
		while( (dup= strchr(dup, character)) != NULL)
			strcpy(dup,dup+1);
	}
	
	for(character = 'a'; character <= 'z'; character ++) {
		if(strchr(key, character) == NULL) {
			*keyp++ = character;
			*keyp = '\0';
		}
	}
	return TRUE;
}
