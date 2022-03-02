#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>

int board[10] = {2,2,2,2,2,2,2,2,2,2};
int turn = 1,flag = 0;
int P,C;
char name;
void menu();
void go(int n);
void start();
void if_draw();
void create_xotable();
void player_1();
void mark_XO(char ch,int pos);
COORD coord= {0,0};
void gotoxy(int x,int y);
int make2();
int make4();
int winpos(int p);