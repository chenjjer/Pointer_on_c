#include <stdio.h>
#include <string.h>

int main()
{
	int ch;
	while((ch=getchar())!= NULL) {
		if(ch > 'a' && ch < 'z') {
			ch = encrypt(ch, 'a');
		}
		else if(ch > 'A' && ch < 'Z') {
			ch = encrypt(ch, 'A')
		putchar();
	}
}
}

int encrypt(int ch, int base) 
{
	ch -=base;
	ch +=13;
	ch %=26;
	return ch+base;
	
}