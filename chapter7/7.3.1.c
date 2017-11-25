int 
ascii_to_interget(char *string)
{
	int value = 0;
	if( *string > '0' && *string < '9') {
	while((*string != NULL))
	{
		value *= 10;
		value += *string - '0';
		string ++;
	}
	return value;
}
	else
		return 0;
	} 
