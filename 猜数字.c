 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("############################\n");
	printf("#####1.我还要玩 ^w^  #######\n");
	printf("#####0.我不玩了 T_T  #######\n");
	printf("############################\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("太小了凹\n");
		}
		else if (guess > ret)
		{
			printf("太大了辣\n");
		}
		else
		{
			printf("哇哦，猜对了* _ *\n");
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
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误！！请重新输入：\n");
			break;
		}
	} while (input);
	return 0;
}