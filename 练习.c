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
	 ����n�Ľ׳�*/
	/*do
	{
		m = m * i;
		i++;
	} while (i <= 5);*/
	/*for (i = 1; i <= 5; i++)
	{
		m = i * m;
		S += m;
	}*///����׳˺�
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
			printf("�ҵ��ˣ��ڵ�%d��", mid);
			break;
		}
	}
		while (left > right)
		{
			printf("�군�ˣ��Ҳ���%d�����", k);
			break;
		}  ������������ض���*/
	/*char arr1[] = "welcome to jiangnan university!!!";
	char arr2[] = "#################################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(300);  ��Ļ�ȴ�ʱ�䣬ms��λ
		system("cls");   �����Ļ
		left++;
		right--;
	}
	printf("ɵ���ӿ��ܣ���������"); 
	Sleep(10000);
	system("cls");*/
	char arr3[10] = { 0 };
	printf("���������룺>\n");
	int password;
	password = scanf("%s/n",&password);
	for (i = 1; i <= 3; i++)
	{
		if (strcmp(password, 123456))
		{
			printf("��½�ɹ���\n");
			break;
		}
		else
		{
			printf("����������������룺>")
		}
	}
	if (i==3)
		printf("���±���������")
		return 0;
}