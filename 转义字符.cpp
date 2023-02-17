 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//转义字符
	printf("c:\\text\\test.c");
	
	//  \ddd表示一个八进制数字
	//  \xdd表示一个16进制数字
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}