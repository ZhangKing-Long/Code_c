
//game.h
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define row 3
#define col 3

//函数声明

//菜单函数
void menu();

//游戏主体函数
void game();

//初始化棋盘函数
void InitBoard(char Board[row][col], int r, int c);

//打印棋盘函数
void DisplayBoard(char Board[row][col], int r, int c);

//玩家下棋函数
void PlayerMove(char Board[row][col], int r, int c);

//电脑下棋函数
void ComputerMove(char Board[row][col], int r, int c);

//检测游戏是否有胜利方
int DetectGame(char Board[row][col], int r, int c);


//main.c
#include "game.h"

int main()
{
    int choice;
    int flag_system=1;

    while(flag_system)
    {
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
            printf("退出游戏！\n");
            flag_system=0;
            break;
        case 1:
            printf("游戏开始!\n");
            game();
            break;
        default:
            printf("操作非法，请重新输入：\n");
            break;
        }
    }
    return 0;
}

void game()
{
    int  flag_game=1;
    char Board[row][col]={0};
    InitBoard(Board, row, col);
    DisplayBoard(Board, row, col);
    while(flag_game)
    {
        PlayerMove(Board, row, col);
        DisplayBoard(Board, row, col);
        flag_game=DetectGame(Board, row, col);
        if(flag_game==0)
        {
            break;
        }
        ComputerMove(Board, row, col);
        DisplayBoard(Board, row, col);
        flag_game=DetectGame(Board, row, col);
    }
}


//game.c
#include "game.h"

//函数实现

void menu()
{
    printf("***********************\n");
    printf("***********************\n");
    printf("******1.开始游戏*******\n");
    printf("******0.退出游戏*******\n");
    printf("***********************\n");
    printf("***********************\n");

}



void InitBoard(char Board[row][col], int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            Board[i][j]= ' ';
        }
    }
}

void DisplayBoard(char Board[row][col], int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(j<(c-1))
            {
                printf(" %c |",Board[i][j]);
            }else
            {
                printf(" %c",Board[i][j]);
            }

        }
        if(i<(r-1))
        {
            printf("\n-----------");
        }
        printf("\n");
    }
}

void PlayerMove(char Board[row][col], int r, int c)
{
    int flag=1;
    int input_r, input_c;
    printf("请输入棋子坐标：\n");
    while(flag)
    {
        scanf("%d %d",&input_r, &input_c);
        if((input_r>0 || input_r<4) && (input_c>0 || input_c<4))
        {
            if(Board[input_r-1][input_c-1]==' ')
            {
                Board[input_r-1][input_c-1]='*';
                flag=0;
            }else
            {
                printf("该位置被占据，请重新输入棋子坐标：\n");
            }
        }else
        {
            printf("该位置非法，请重新输入：\n");
        }
    }

}

void ComputerMove(char Board[row][col], int r, int c)
{
    int x,y;
    while(1)
    {
        x=rand() %row;
        y=rand() %col;
        if(Board[x][y]==' ')
        {
            Board[x][y]='#';
            printf("电脑已完成下子！\n");
            break;
        }
    }
}

int DetectGame(char Board[row][col], int r, int c)
{
    int flag=1;
    for(int i=0; i<r; i++)
    {
        if(Board[i][1]==Board[i][2] && Board[i][1]==Board[i][0])
        {
            if(Board[i][0]== '*')
            {
                printf("玩家胜出！\n");
                flag=0;

            }
            if(Board[i][0]== '#')
            {
                printf("电脑胜出！\n");
                flag=0;
            }

            break;
        }
        if(Board[1][i]==Board[2][i] && Board[1][i]==Board[0][i])
        {
            if(Board[0][i]== '*')
            {
                printf("玩家胜出！\n");
                flag=0;

            }
            if(Board[0][i]== '#')
            {
                printf("电脑胜出！\n");
                flag=0;

            }
            flag=0;
            break;
        }
    }
    if(Board[1][1]==Board[2][2] && Board[0][0]==Board[1][1])
    {
        if(Board[0][0]== '*')
            {
                printf("玩家胜出！\n");
                flag=0;
            }
            if(Board[0][0]== '#')
            {
                printf("电脑胜出！\n");
                flag=0;
            }
    }
    if(Board[0][2]==Board[2][0] && Board[0][2]==Board[1][1])
    {
        if(Board[0][2]== '*')
            {
                printf("玩家胜出！\n");
                flag=0;
            }
            if(Board[0][2]== '#')
            {
                printf("电脑胜出！\n");
                flag=0;
            }
    }
    return flag;
}

//this is git test








