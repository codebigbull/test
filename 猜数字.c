 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("############################\n");
	printf("#####1.�һ�Ҫ�� ^w^  #######\n");
	printf("#####0.�Ҳ����� T_T  #######\n");
	printf("############################\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("̫С�˰�\n");
		}
		else if (guess > ret)
		{
			printf("̫������\n");
		}
		else
		{
			printf("��Ŷ���¶���* _ *\n");
			break;
		}
	}
}
int main()
{
	
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������󣡣����������룺\n");
			break;
		}
	} while (input);
	return 0;
}