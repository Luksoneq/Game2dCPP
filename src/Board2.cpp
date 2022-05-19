#include "Board2.h"
#include <iostream>

using namespace std;

Board::Board(int Bsize) : Bsize{Bsize}
{
    int rows = this->Bsize;
    int cols = this->Bsize;

    this->board = new char*[rows];
    for(int i = 0; i < rows; i++)
    {
        board[i] = new char[cols];
    }
    Reset();
}
Board::~Board()
{
    for(int i = 0; i < Bsize; i++)
    {
        delete [] board[i];
    }
    delete [] board;
}

void Board::Reset()
{
    for(int i = 0; i < Bsize; i++)
    {
        for(int j = 0; j < Bsize; j++)
        {
            board[i][j] = '-';
        }
    }
}


void Board::displayBoard()
{
    for(int i = 0; i < Bsize; i++)
    {
        for(int j = 0; j < Bsize; j++)
        {
            cout<<"["<<board[i][j]<<"] ";
        }
    cout<<endl;
    }
}

void Board::setPosition(char Osymbol, int x , int y)
{
    board[x][y] = Osymbol;
}
