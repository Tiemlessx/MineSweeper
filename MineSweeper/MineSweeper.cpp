#include <bits/stdc++.h>
using namespace std;

#define BEGINNER 0  //9x9 10mines
#define INTERM 1    //16x16 40mines
#define ADVANCED 2  //25x25 99 mines
#define MAXSIDE 25 //board size may differ 
#define MAXMINES 99 //by minesweeper rules is max # of bombs
#define MOVESIZE 526 //maxside x2 - mines

int SIDE;  //current board size
int MINES;  //current mines #


bool isValid(int row, int col)
{
    return (row < SIDE&& row >= 0 && col < SIDE&& col >= 0);
}

bool isMine(int row, int col, char board[][MAXSIDE])
{
    if (board[row][col] == '*')
        return true;
    else return false;
}

//QoL screeninput
void makeMove(int* x, int* y)
{
    printf("Enter your move, (row, column) -> ");
    scanf("%d %d", x, y);
    return;
}

/*
void showBoard(char myBoard[][MAXSIDE])
{
    int i, j;

    printf("    ");

    for (i = 0; i < SIDE; i++)
        printf("%d ", i);

    printf("\n\n");

    for (i = 0; i < SIDE; i++)
    {
        printf("%d   ", i);

        for (j = 0; j < SIDE; j++)
            printf("%c ", myBoard[i][j]);
        printf("\n");
    }
    return;
}*/

int coutNearbyMines(int row, int col, int mines[][2], char realBoard[][MAXSIDE])
{
    int i;
    int count = 0;

    /*
        Cell-->Current Cell (row, col)
        N -->  North        (row-1, col)
        S -->  South        (row+1, col)
        E -->  East         (row, col+1)
        W -->  West         (row, col-1)
        N/E--> North-East   (row-1, col+1)
        N/W--> North-West   (row-1, col-1)
        S/E--> South-East   (row+1, col+1)
        S/W--> South-West   (row+1, col-1)
    */

    //North
    if (isValid(row - 1, col) == true)
    {
        if (isMine(row - 1, col, realBoard) == true)
            count++;
    }
    //South
    if (isValid(row + 1, col) == true)
    {
        if (isMine(row + 1, col, realBoard) == true)
            count++;
    }
    //East
    if (isValid(row, col+1 ) == true)
    {
        if (isMine(row, col+1, realBoard) == true)
            count++;
    }
    //West
    if (isValid(row, col - 1) == true)
    {
        if (isMine(row, col - 1, realBoard) == true)
            count++;
    }
    //North-East
    if (isValid(row - 1, col+1) == true)
    {
        if (isMine(row - 1, col+1, realBoard) == true)
            count++;
    }
    //North-West
    if (isValid(row-1, col - 1) == true)
    {
        if (isMine(row-1, col - 1, realBoard) == true)
            count++;
    }
    //South-East
    if (isValid(row + 1, col + 1) == true)
    {
        if (isMine(row + 1, col + 1, realBoard) == true)
            count++;
    }
    //South-West
    if (isValid(row + 1, col - 1) == true)
    {
        if (isMine(row + 1, col - 1, realBoard) == true)
            count++;
    }
    return count;
}

bool 
{
    int i,j;
    if (realBoard[row][col]=='*')
    {   
        myBoard[row][col]='*';

}

int main()
{
}
