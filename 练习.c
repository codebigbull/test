 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i = 1;
	int n = 0;
	int m = 1;
	int z = 1;
	int S = 0;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	/*for (i = 1; i < n; i++)
		m =i*m;
	printf("%d\n", m);
	 计算n的阶乘*/
	/*do
	{
		m = m * i;
		i++;
	} while (i <= 5);*/
	/*for (i = 1; i <= 5; i++)
	{
		m = i * m;
		S += m;
	}*///计算阶乘和
	/*int ez = 0;
	int k = 17;
	ez = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = ez-1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left += 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，在第%d个", mid);
			break;
		}
	}
		while (left > right)
		{
			printf("完蛋了，找不到%d这个数", k);
			break;
		}  有序数组查找特定数*/
	/*char arr1[] = "welcome to jiangnan university!!!";
	char arr2[] = "#################################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(300);  屏幕等待时间，ms单位
		system("cls");   清空屏幕
		left++;
		right--;
	}
	printf("傻孩子快跑！！！！！"); 
	Sleep(10000);
	system("cls");*/
	char arr3[10] = { 0 };
	printf("请输入密码：>\n");
	int password;
	password = scanf("%s/n",&password);
	for (i = 1; i <= 3; i++)
	{
		if (strcmp(password, 123456))
		{
			printf("登陆成功。\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入：>")
		}
	}
	if (i==3)
		printf("请下辈子再来！")
		return 0;
}