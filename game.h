# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#pragma once
#define ROW 9
#define easy 10
#define COL 9
#define ROWS ROW+2
#define COLS COL+2  //�����������
//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS],int row,int col);
//�Ų���
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);