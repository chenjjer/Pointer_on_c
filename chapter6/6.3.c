void reverse_string(char *string)
{
	char * last_char;
	for ( last_char= string; last_char != '\0'; last_char ++);
	last_char --;
	while( str < last_char ) {
		char temp;
		temp = *str;
		*str++ = *last_char;
		*last_char-- = temp;
	}
}