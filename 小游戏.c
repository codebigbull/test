 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	flag:
	printf("请注意，您的电脑将在一分钟后关机，输入:我是猪 取消关机\n");
		system("shutdown -s -t 60");
	scanf("%s",input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto flag;// goto语句不能跨函数使用。
	}
	return 0;
}