char *readchar()
{
	char *array;
	char value;
	int  count;
	int size;
	size = 100;
	count = 0;
	arrya = malloc(size * sizeof(char));
	
	while(scanf("%c",&value) == 1) {
		count ++;
		if(count > size )
			size += 100;
			array = realloc(array, size*sizeof(int));
   array[count] = value;
   return array;
 }
}  

//standard answer
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#define DELAT 256
char *readstring()
{
	static char *buffer = NULL;
	static int buffer_size = 0;
	int ch;
	int len;
	char *bp;
	
	bp = buffer;
	len = 0;
	do{
		ch = getchar();
		if(ch == '\n' || ch == EOF)
			return ch = '\0';
		if(len > buffsize) {
			buffsize += DELAT;
			buffer = realloc(buffer, buffsize);
			assert(buffer != NULL)
			bp = len + buffer
		}
		*bp++ = ch;
		len++;
	}while(ch = '\0');
	
	bp = malloc(len);
	assert(bp != 0);
	strcpy(bp, buffer)
	return bp;
}
			
			