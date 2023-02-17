 #define _CRT_SECURE_NO_WARNINGS 1
# include "game.h"
void menu()
{
	printf("***********************\n");
	printf("*******1. play game****\n");
	printf("*******2. exit game****\n");
	printf("***********************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//排查出来的雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷！！！
	SetMine(mine,ROW,COL);
	//排查雷
	FindMine(mine, show,ROW, COL);
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//！！！！！！srand 函数的格式
	do
	{
		menu();
		printf("choose please:(0 or 1)\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("再见");
			break;
		}
		default:
			break;
		}
	} while (input);
	return 0;

}
