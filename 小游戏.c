 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	flag:
	printf("��ע�⣬���ĵ��Խ���һ���Ӻ�ػ�������:������ ȡ���ػ�\n");
		system("shutdown -s -t 60");
	scanf("%s",input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto flag;// goto��䲻�ܿ纯��ʹ�á�
	}
	return 0;
}