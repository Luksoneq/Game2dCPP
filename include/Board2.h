#ifndef BOARD2_H
#define BOARD2_H


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

#endif // BOARD2_H
