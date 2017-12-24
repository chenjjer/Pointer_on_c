#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_non_print(ch)
{
	return !isprint(ch);
}

static int (*test_fun[]) (int) = {
	iscntrl,
	isspace,
	isdigit,
	islower,
	isupper,
	ispunct,
	is_non_print
};

#define N_CATEGORIES (sizeof(test_fun)/sizeof(test_fun[0]))

char *lable = {
	"contrl",
	"whitespace",
	"digit",
	"lower case",
	"upper case",
	"punctuation",
	"non_printable"
};

int count[N_CATEGORIES];
int total;

int 
main()
{
	int ch;
	int category;
	while((ch= getchar()) != EOF) {
		total++;
		for(category = 0 ; category<= N_CATEGORIES; category++){
			if(test_fun[N_CATEGORIES](ch))
				count[category] ++;
			}
		}
		
		if(total = 0) {
			printf("is_non_printf\n");
		}
		else {
			for(category = 0; category < N_CATEGORIES; category++)
			{
				printf("%3.0f%% %s characters\n",
				count[category]*100.0/total,
				label[category]);
			}
		}
		return EXIT_SUCCESS;
	}
