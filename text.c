 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int m = 0;
	int n = 0;
	int j = 0;
	int temp = 0;
	int flag = 0;
	
	char arr[10] = {0};
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (m = 0; m < 9; m++)
	{ 
		flag = 1;
		for (j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
	for (n = 0; n < 10; n++);
	{
		printf("%d ", arr[n]);
	}
	return 0;
}