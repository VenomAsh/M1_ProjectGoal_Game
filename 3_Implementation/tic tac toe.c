//TicTacToe Game

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>

int board[10] = {2,2,2,2,2,2,2,2,2,2};
int turn = 1,flag = 0;
int P,C;
void menu();
void go(int n);
void start();
void if_draw();
void create_xotable();
void player_1();
void put_X_O(char ch,int pos);
COORD coord= {0,0}; 

void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void main()
{
    system("cls");
    menu();
    getch();
}
void menu()
{
    int choice;
    system("cls");
    printf("\n------------OPTIONS------------");
    printf("\n1 : Play first as X");
    printf("\n2 : Play second as O");
    printf("\n3 : Exit");
    printf("\nEnter your choice: 1,2 or 3 >");
    scanf("%d",&choice);
    turn = 1;
    switch (choice)
    {
    case 1:
        P = 1;
        C = 0;
        player_1();
        break;
    case 2:
        P = 0;
        C = 1;
        start();
        break;
    case 3:
        exit(1);
    default:
        menu();
    }
}
int make2()
{
    if(board[5] == 2)
        return 5;
    if(board[2] == 2)
        return 2;
    if(board[4] == 2)
        return 4;
    if(board[6] == 2)
        return 6;
    if(board[8] == 2)
        return 8;
    return 0;
}
int make4()
{
    if(board[1] == 2)
        return 1;
    if(board[3] == 2)
        return 3;
    if(board[7] == 2)
        return 7;
    if(board[9] == 2)
        return 9;
    return 0;
}
int winpos(int p)
{
// p==1 then X   p==0  then  O
    int i;
    int check_val,pos;

    if(p == 1)
        check_val = 18;
    else
        check_val = 50;
    i = 1;
    while(i<=9) //check the row
    {
        if(board[i] * board[i+1] * board[i+2] == check_val)
        {
            if(board[i] == 2)
                return i;
            if(board[i+1] == 2)
                return i+1;
            if(board[i+2] == 2)
                return i+2;
        }
        i+=3;
    }
    i = 1;
    while(i<=3) //check the column
    {
        if(board[i] * board[i+3] * board[i+6] == check_val)
        {
            if(board[i] == 2)
                return i;
            if(board[i+3] == 2)
                return i+3;
            if(board[i+6] == 2)
                return i+6;
        }
        i++;
    }
    if(board[1] * board[5] * board[9] == check_val)
    {
        if(board[1] == 2)
            return 1;
        if(board[5] == 2)
            return 5;
        if(board[9] == 2)
            return 9;
    }
    if(board[3] * board[5] * board[7] == check_val)
    {
        if(board[3] == 2)
            return 3;
        if(board[5] == 2)
            return 5;
        if(board[7] == 2)
            return 7;
    }
    return 0;
}
void go(int n)
{
    if(turn % 2)
        board[n] = 3;
    else
        board[n] = 5;
    turn++;
}

void player_1()
{
    int pos;
    if_draw();
    create_xotable();
    gotoxy(30,18);
    printf("Your Turn :> ");
    scanf("%d",&pos);

    if(board[pos] != 2)
        player_1();

    if(pos == winpos(P))
    {
        go(pos);
        create_xotable();
        gotoxy(30,20);
        printf("You win!");
        getch();
        exit(0);
    }
    go(pos);
    create_xotable();
    start();
}

void start()
{
// p==1 then X   p==0  then  O
    if(winpos(C))
    {
        go(winpos(C));
        flag = 1;
    }
    else if(winpos(P))
        go(winpos(P));
    else if(make2())
        go(make2());
    else
        go(make4());
    create_xotable();

    if(flag)
    {
        gotoxy(30,20);
        printf("Computer wins");
        getch();
    }
    else
        player_1();
}

//if the game is draw
void if_draw()
{
    if(turn > 9)
    {
        gotoxy(30,20);
        printf("Draw");
        getch();
        exit(0);
    }
}

//creating the tictactoe board
void create_xotable()
{
    int j;

    for(j=9; j<17; j++)
    {
        gotoxy(35,j);
        printf("|       |");
    }
    gotoxy(28,11);
    printf("-----------------------");
    gotoxy(28,14);
    printf("-----------------------");
    for(j=1; j<10; j++)
    {
        if(board[j] == 3)
            put_X_O('X',j);
        else if(board[j] == 5)
            put_X_O('O',j);
    }
}

void put_X_O(char ch,int pos)
{
    int m;
    int x = 31, y = 10;
    m = pos;
    if(m > 3)
    {
        while(m > 3)
        {
            y += 3;
            m -= 3;
        }
    }
    if(pos % 3 == 0)
        x += 16;
    else
    {
        pos %= 3;
        pos--;
        while(pos)
        {
            x+=8;
            pos--;
        }
    }
    gotoxy(x,y);
    printf("%c",ch);
}
