#include <stdio.h>
#include <stdlib.h>

sort(void array[], num, len, &compare(int *a, int *b))
{
	int i,j;
	for(i=0,i<len,i++)
		for(j=i, j<len, j++){
			if(array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp
			}
			compare(array[i], array[j]);
			
		}
}

void 
compare(int *a, int *b)
{
	if( *a == *b)
		return 0;
	else if(*a < *b )
		return -1;
	else if(*a > *b)
		return 1;
}
// 

swap(char *i, char *j, int recsize)
{
	char temp;
	while(recsize-- >0) {
		temp = *i;
		*i = *j;
		*j = temp;
	}
}

void 
sort(char *base, int nel, int recsize, int (*comp)(char *, char *))
{
	reg char *i;
	reg char *j;
	reg char *last;
	
	last=base +(nel-1)*recsize;
	
	for(i=base; i<last,i+= recsize)
		for(j=i+recsize; j<= last; j+=recsize)
			if(comp(i,j)>0)
				swap(i,j,recsize);
}
}