 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char name[20];
	float score;
	int age;
};
int main()
{
	//define 定义宏
	//& 取地址符
	//* 解引用操作符
	///*int num = 10;
	//int* pa = &num;
	//*pa = 20;
	//printf("%d\n", num);*/
	struct stu a = { "张三",7.5,22 };
	printf("%s %f %d\n", a.name,a.score,a.age);
	return 0;
	// struct 创建结构

}