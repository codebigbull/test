 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	printf("����һ");
	break;
	case 2:
	printf("���ڶ�");
	break;
	case 3:
	printf("������");
	break;
	case 4:
	printf("������");
	break;
	case 5:
	printf("������");
	break;
	case 6:
	printf("������");
	break;
	case 7:
	printf("������");
	break;
	default:
		printf("error");
	}
	return 0;
}