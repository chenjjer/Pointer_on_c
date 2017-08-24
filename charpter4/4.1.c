#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float new_guess;
	float last_guess;
	float number;
	
	printf("please enter the number\n");
	scanf("%f", &number);
	
	if (number<0) {
		printf("Cannot compute the square root");
		return EXIT_FAILURE;
	}
	
	new_guess = 1;
	do{
		last_guess = new_guess;
		new_guess = (last_guess + number/last_guess)/2;
		printf("%.15e\n", new_guess);
	}while(new_guess!=last_guess);
	
	printf("the square root of %g is %g\n", number, new_guess);
	
	return 0;

}
