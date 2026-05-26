#include <stdio.h>
#include "game.h"

void game()
{
    int result = -2;
    char board[ROW][COL] = {0};
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);
    while(1)
    {
        //玩家下棋
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        result = iswin(board, ROW, COL);
        if(result == 1)
        {
            printf("恭喜你赢了！\n");
            break;
        }
        else if(result == 2)
        {
            printf("电脑赢了！\n");
            break;
        }
        else if(result == 0)
        {
            printf("平局！\n");
            break;
        }
        //电脑下棋
        computerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        result = iswin(board, ROW, COL);
        if(result == 1)
        {
            printf("恭喜你赢了！\n");
            break;
        }
        else if(result == 2)
        {
            printf("电脑赢了！\n");
            break;
        }
        else if(result == 0)
        {
            printf("平局！\n");
            break;
        }
    }
}

void InitBoard(char board[ROW][COL],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
      
        
        for(int j = 0; j < col; j++)
        {
            printf(" %c ",board[i][j]);
            if(j!=col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i!=ROW-1)
        {
            for(int k = 0; k < col; k++)
            {
                printf("---");
                if(k!=col-1)
                {
                    printf("|");
                }
            }
        }
        printf("\n");
        
    }
}

void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x = 0;
    int y = 0;
    printf("请输入你要下棋的位置: ");
    while(1)
    {
        
        scanf("%d %d",&x,&y);
        if(x<1 || x>ROW || y<1 || y>COL)
        {
            printf("输入错误，请重新输入\n");
            continue;
        }
        if(board[x-1][y-1] != ' ')
        {
            printf("该位置已经有棋子了，请重新输入\n");
            continue;
        }
        else
        {
            board[x-1][y-1] = 'p';
            break;
        }
        
    }
   
}

void computerMove(char board[ROW][COL],int row,int col)
{
    int x = 0;
    int y = 0;
    printf("电脑正在下棋...\n");
    while(1)
    {
        x = rand()%ROW;
        y = rand()%COL;
        if(board[x][y] != ' ')
        {
            continue;
        }
        else
        {
            board[x][y] = 'c';
            break;
        }
        
    }
}

int iswin(char board[ROW][COL],int row,int col )
{
    //判断行
    for (int i = 0; i < row; i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            if(board[i][0] == 'p')
            {
                return 1;
            }
            else if(board[i][0] == 'c')
            {
                return 2;
            }
        }
    }
    //判断列
    for (int j = 0; j < col; j++)
    {
        if(board[0][j] == board[1][j] && board[1][j] == board[2][j])
        {
            if(board[0][j] == 'p')
            {
                return 1;
            }
            else if(board[0][j] == 'c')
            {
                return 2;
            }
        }
    }
    //判断斜线
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        if(board[0][0] == 'p')
        {
            return 1;
        }
        else if(board[0][0] == 'c')
        {
            return 2;
        }
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        if(board[0][2] == 'p')
        {
            return 1;
        }
        else if(board[0][2] == 'c')
        {
            return 2;
        }
    }
    //判断平局
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(board[i][j] != ' ')
            {
                count++;
            }
        }
        
    }
    if(count == ROW*COL)
    {
        return 0;
    }
    
    //继续游戏
    return -1;
}
