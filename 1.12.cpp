#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//{
//	创建一个变量
//	先类型，后变量=0
//	不提倡 变量；的形式
//	int 是类型，age是变量
	/*int age = 20;
	double weight = 75.2;
	printf("age=%d\n", age);
	printf("weight=%lf", weight);*/
//	{}外面的是全局变量
//	{}里面的是局部变量，两者冲突时局部优先
//	作用域 ：作用范围
//	生命周期：创建和销毁之间的时间段
//	常量
//	1.字面常量
//	2.const修饰的常变量
//	3.#define定义的标识符常量
//	4.枚举常量
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
//字符串就是一串字符。由双引号引起的内容
//字符串结束隐藏了一个\0
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
