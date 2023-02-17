# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#pragma once
#define ROW 9
#define easy 10
#define COL 9
#define ROWS ROW+2
#define COLS COL+2  //创建表格棋盘
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS],int row,int col);
//排查雷
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);