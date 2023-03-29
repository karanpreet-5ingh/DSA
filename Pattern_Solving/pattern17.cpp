/*
using extra character

D
CD
BCD
ABCD

*/

#include <iostream>
using namespace std;
int main()
{
    int n = 6, row = 1, col;

    while (row <= n)
    {
        col = 1;
        char ch = 'A' + 4 - row;// starting character dhundh lo fir coloum k lop me pakkad k ghuma doo :)
        

        while (col <= row)
        {
            cout << ch;
            ch = ch +1;

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}