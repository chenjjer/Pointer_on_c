#include <string.h>
#include <stdio.h>

char *
my_strrchr(char const *str, int ch)
{
	int len = 0;
	while ( *str != '\0') {
		strchr(str,ch);
		len ++;
	}
	return strchr(str,ch) + len;
}
// 上面这种方法应该有错误，只能说只是求出了字符串的长度
// 而没有求出真正的指针的位置。
char*
my_strrchr(char const *str, int ch)
{
	char *pre_answer = NULL;
	for(;(str = strchr(str,ch)) != NULL, str++)
	pre_answer = str;
	
	return pre_answer;
}

