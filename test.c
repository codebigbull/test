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
	char mine[ROWS][COLS] = { 0 };//���úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//�Ų�������׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//�����ף�����
	SetMine(mine,ROW,COL);
	//�Ų���
	FindMine(mine, show,ROW, COL);
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������������srand �����ĸ�ʽ
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
			printf("�ټ�");
			break;
		}
		default:
			break;
		}
	} while (input);
	return 0;

}
