void deblank(char string[])
{
	char *dest;
	char *src;
	int ch;
	src = string ;
	dest = string++;
	while( (ch = *src++) !=NUL) {
		if(is_white(ch) {
			if( src == string || !is_white(dest[-1]))
				*dest ++ = ' ';
			}
			else {
				*dest ++ = ch;
		}
		*dest = NUL;
}
int is_white( int ch)
{
	return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' ||
	ch == '\n' || ch == '\r';
}