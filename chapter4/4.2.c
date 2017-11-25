#include<stdio.h> 
#include<stdlib.h>
int main()
{	
	int number;
	int divsor;
	for(number =3; number<=100; number=number+2) {
		for (divsor =3; divsor< number; divsor = divsor +2) {
			if(number % divsor == 0)
				break;
		}
		if (divsor >= number)
		printf(" %d\n", number);
	}
	return 0;
}
