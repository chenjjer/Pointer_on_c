#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_not_print(ch)
{
	return !isprint(ch);
}

static int (*test_func[])(int) = {
	iscntrl,
	isspace,
	isdigit,
	islower,
	isupper,
	ispunct,
	is_not_print
};

#define N_CATEGORIES (sizeof(test_func)/sizeof(test_func[0]))

char *lable[] ={
	"control",
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
main(int argc, char **argv)
{
	int ch;
	int category;
	
	while((ch=getchar())!= EOF) {
		total ++;
		for(category = 0; category <= N_CATEGORIES; category++){
			if(test_func[category](ch))
				count[category] ++;
			}
		}
		
		if(total = 0) {
			printf("No characters in the put\n");
		}
		else {
			for(category = 0 ; category < N_CATEGORIES; category++) {
				printf("%3.0f%% %s characters\n",
				count[category]*100.0/total,
				label[category]);
			}
		}
		return EXIT_SUCCESS;
	}
