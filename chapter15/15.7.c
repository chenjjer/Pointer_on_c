#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 512

int
main() 
{
	char buffer[BUFFER_SIZE];
	
	while(fgets(buffer,BUFFER_SIZE, stdin) != NULL ) {
		int age[10];
		int members;
		int sum;
		int i;
		
		members = sscanf(buffer, "%d %d  %d  %d  %d  %d %d  %d  %d  %d ", 
						age, age+1, age+2, age+3, age+4, age+5,age+6,age+7,age+8,age+9);
		if(members == 0)
			continue;
		sum = 0;
		for(i=0; i< members; i++)
			sum +=age[i];
	}
}