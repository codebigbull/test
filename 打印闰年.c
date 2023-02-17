 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
year(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int count = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if (year(i) == 1)
		{
			printf("%d ", i);
			count++;
			
		}
	}
	printf("\ncount=%d", count);
		
	return 0;
}