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
	printf("~~~~~ɨ����Ϸ~~~~~~\n");
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
	printf("~~~~~ɨ����Ϸ~~~~~~\n");

}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = easy;
	while (count)
	{
		//��������±�
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
		- 8 * '0';//�����
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;

	//1.�����Ų�����ꡣ
	//2.��������ǲ����ס�
	//3.����ǣ���ը����������ǣ�����ʾ�����׵ĸ�����
	
	while (win<row*col- easy)
	{
		int x = 0;
		int y = 0;
		printf("�������Ų��Ŀ�꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
			}
			else
			{
				//ͳ����Χ���׸���
				int count = Get_mine_count(mine, x, y);
				show[x][y] = count + '0';//ǰ��������ͬ���ַ�0��ASCIIֵ��48.
				//��ʾ�Ų�2��Ϣ
				DisplayBoard(show, row, col);

			}
		}
		else
		{
			printf("���겻�Ϸ������������룺\n");
		}
	}
	if (win == row * col - easy)
	{
		printf("��ϲ�㣬���׽�����");
		DisplayBoard(mine, row, col);
	}
}