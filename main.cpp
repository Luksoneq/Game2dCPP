#include <iostream>
#include "Board2.h"
using namespace std;



int main()
{
    Board b(3);

    b.setPosition('g',1,1);

    b.displayBoard();
    cout << "Hello world!" << endl;
    return 0;
}
