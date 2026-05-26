#include <stdio.h>
#include <windows.h>
#include "game.h"

void menu()
{
    printf("******************************************\n");
    printf("******* 要玩游戏请按 1，退出游戏请按 0 ********\n");
    printf("******************************************\n");
}

int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    while (1)
    {
        menu();
        printf("请输入你的选择: ");
        scanf("%d", &input);
        if (input == 1)
        {
            game();
        }
        else if (input == 0)
        {
            printf("退出游戏了\n");
            break;
        }
        else
        {
            printf("输入错误，请重新输入\n");
        }
    }

    return 0;
}
