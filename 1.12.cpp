#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//{
//	����һ������
//	�����ͣ������=0
//	���ᳫ ����������ʽ
//	int �����ͣ�age�Ǳ���
	/*int age = 20;
	double weight = 75.2;
	printf("age=%d\n", age);
	printf("weight=%lf", weight);*/
//	{}�������ȫ�ֱ���
//	{}������Ǿֲ����������߳�ͻʱ�ֲ�����
//	������ �����÷�Χ
//	�������ڣ�����������֮���ʱ���
//	����
//	1.���泣��
//	2.const���εĳ�����
//	3.#define����ı�ʶ������
//	4.ö�ٳ���
//
	/*int num = 10;
	num = 20;
	printf("num=%d\n", num);
}
enum Sex
{
	male,
	female,
	secret,
};
int main()
{
	enum Sex s=male;
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);
	return 0;
}*/
//�ַ�������һ���ַ�����˫�������������
//�ַ�������������һ��\0
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};

	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/
	int len1 = strlen("arr1");
	int len2 = strlen("arr2");
	printf("%d\n", len1);
	printf("%d\n", len2);
	return 0;
}
