 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//������ +-*/%
	// <<  >>����λ������
	// /������������ִ��������������һ����С����ִ��С������
	//int a = 9 % 2;//ȡģ��������
	//printf("%d\n", a);
	//return 0;
	/*int b = 2;
	int c = b << 1;
	printf("%d\n", c);*/
	/*int a = 0;*/
	// ~ ���������ƣ�λȡ���������ж�����λ�����ӣ�1���0��0��1��
	/*printf("%d\n", ~a);*/
	//ԭ��
	//���룺ԭ�����λ���䣬����λ��λȡ����
	//���룺����+1
	
	//  ǰ��++���ȼ����ʹ�ã�
	//  ����++����ʹ�ú����
	/*int a = 10;
	int b = a++;
	printf("%d\n", b);
	printf("%d\n", a);*/
	// ?: ��Ŀ������ exp1?exp2:exp3 ��exp1Ϊ�棬����exp2���������exp3�����
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
	//���ű��ʽ������㣬������һ�����ʽ�����
	int a = 3;
	int b = 4;
	int c = 0;
	 //       a=7    b=6         c=2
	int d = (a=a + 4, b = a - 1,c=a-b+1);	
	printf("%d\n", d);	
	return 0;
}