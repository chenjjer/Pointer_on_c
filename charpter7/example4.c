#include<stdio.h>
void binary_to_ascii(unsigned int value)
{
	quotient = value/10;
	if(quotient != 0)
		binary_to_ascii(quotient);
	putchar(value % 10 + '0');
}