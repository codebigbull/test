 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	/*int max = m > n ? n: m;
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("���Լ��Ϊ%d��\n", max);
			break;
		}
			max--;
	}*/
	int t = 0;
	while (t = m % n)
	{
		m = n;
		n = t;//շת����������Լ����
		
	}
	printf("���Լ��Ϊ%d��\n", n);
	return 0;

}