#ifndef BOARD_H
#define BOARD_H


class Board
{
    private:
        int Bsize;
        char** board;
    public:
        Board(int Bsize);
        ~Board();
        void displayBoard();
        void Reset();
        void setPosition(char Osymbol, int x , int y);

};

#endif // BOARD_H
