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
// �������ַ���Ӧ���д���ֻ��˵ֻ��������ַ����ĳ���
// ��û�����������ָ���λ�á�
char*
my_strrchr(char const *str, int ch)
{
	char *pre_answer = NULL;
	for(;(str = strchr(str,ch)) != NULL, str++)
	pre_answer = str;
	
	return pre_answer;
}

