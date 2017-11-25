#include <string.h>
#include <stdio.h>

void
dollars(char *dest, char const *src)
{
	 char *temp;
	 int count;
	 count = 0;
	 temp = src;
	 while ( *src != NULL)
	 count ++;
	 if(count <= 2 && count >= 0)
	 	 	
	 		
	 		
}

void
dollar(char *dest, char const *src)
{
	int len;
	if(dest == NULL || src == NULL)
		return;
	
	*dest++ = '$';
	len = strlen(src);
	
	if(len >= 3) {
		int i ;
		for(i= len - 2; i > 0;) {
			*dst++ = *src ++;
			if( --i > 0 && i % 3 ==0)
				*dst ++ = ',';
			}
		}
		else
			*dst++='0';
			
			*dst++='.';
			*dst++=len < 2 ? '0' : *src++;
			*dst++=len < 1 ? '0' : *src;
			*dst = 0;
}