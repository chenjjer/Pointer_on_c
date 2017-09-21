#include <stdio.h>
#include <string.h>

int mian() 
{
	int ch;
	while( (ch=getchar())!=EOF) {
		if ( ch >= 'A' && ch <= 'Z') {
			ch += 'a' - 'A';
		}
		putchar(ch);
	}
}