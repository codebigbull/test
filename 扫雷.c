#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < rows; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("~~~~~扫雷游戏~~~~~~\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			if (i == 0)
			{
				printf("%d ", j);
			}
			else
			{
				printf("%c ", board[i][j]);
			}
			
		}
		printf("\n");
	}
	printf("~~~~~扫雷游戏~~~~~~\n");

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = easy;
	while (count)
	{
		//生成随机下标
		int x = rand() % row + 1;
		int y = rand() % row + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

Get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y]
		+ mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] + mine[x - 1][y]
		- 8 * '0';//算个数
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;

	//1.输入排查的坐标。
	//2.检查坐标是不是雷。
	//3.如果是，就炸死，如果不是，就提示附近雷的个数。
	
	while (win<row*col- easy)
	{
		int x = 0;
		int y = 0;
		printf("请输入排查的目标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
			}
			else
			{
				//统计周围的雷个数
				int count = Get_mine_count(mine, x, y);
				show[x][y] = count + '0';//前后类型相同，字符0的ASCII值是48.
				//显示排查2信息
				DisplayBoard(show, row, col);

			}
		}
		else
		{
			printf("坐标不合法，请重新输入：\n");
		}
	}
	if (win == row * col - easy)
	{
		printf("恭喜你，排雷结束！");
		DisplayBoard(mine, row, col);
	}
}