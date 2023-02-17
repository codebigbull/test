 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//操作符 +-*/%
	// <<  >>是移位操作符
	// /号两端是整数执行整数除法，有一个是小数则执行小数除法
	//int a = 9 % 2;//取模，得余数
	//printf("%d\n", a);
	//return 0;
	/*int b = 2;
	int c = b << 1;
	printf("%d\n", c);*/
	/*int a = 0;*/
	// ~ 按（二进制）位取反，把所有二进制位中数子，1变成0，0变1；
	/*printf("%d\n", ~a);*/
	//原码
	//反码：原码符号位不变，其他位按位取反；
	//补码：反码+1
	
	//  前置++，先计算后使用，
	//  后置++，先使用后计算
	/*int a = 10;
	int b = a++;
	printf("%d\n", b);
	printf("%d\n", a);*/
	// ?: 三目操作符 exp1?exp2:exp3 若exp1为真，计算exp2，否则输出exp3结果。
	/*int a = 4;
	int b = 2;
	int max = 0;
	if
		(a > b)
		max = a;
	else
		max = b;
	max = a > b ? a : b;
	printf("%d", max);*/
	//逗号表达式从左计算，输出最后一个表达式结果。
	int a = 3;
	int b = 4;
	int c = 0;
	 //       a=7    b=6         c=2
	int d = (a=a + 4, b = a - 1,c=a-b+1);	
	printf("%d\n", d);	
	return 0;
}