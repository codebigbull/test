 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	//ת���ַ�
	printf("c:\\text\\test.c");
	
	//  \ddd��ʾһ���˽�������
	//  \xdd��ʾһ��16��������
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}