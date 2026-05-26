#ifndef __GAME_H
#define __GAME_H
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3


void game();
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void computerMove(char board[ROW][COL],int row,int col);

int iswin(char board[ROW][COL],int row,int col );
//玩家赢返回1，电脑赢返回2，平局返回0，继续游戏返回-1
#endif