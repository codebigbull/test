#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int ADD(int x, int y)
//函数可以随时调用，但不能放在main里
//{
//int z = 0;
//z = x + y;
//return z;
//}
//数组：一组相同类型的元素的集合
//数组用下标访问
int main()
{
	/*int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = ADD(num1,num2);
	printf("sum=%d\n", sum);*/
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int ch[5] = { '1','2','3' };
	int i = 0;
		while (i < 10);
	{
		printf("%d", arr[i]);
		i++;
	}

	return 0;
}