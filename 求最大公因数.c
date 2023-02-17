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
			printf("最大公约数为%d。\n", max);
			break;
		}
			max--;
	}*/
	int t = 0;
	while (t = m % n)
	{
		m = n;
		n = t;//辗转相除法求最大公约数。
		
	}
	printf("最大公约数为%d。\n", n);
	return 0;

}