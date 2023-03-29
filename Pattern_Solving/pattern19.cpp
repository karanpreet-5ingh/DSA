/*
using extra character

*****
***
**
*


*/

#include <iostream>
using namespace std;
int main()
{
    int n = 4, row = 1, col;
    int star = n - row + 1;
    // int space = row - 1;

    while (row <= n)
    {
        col = 1;
        int star = n - row + 1;
        int space = row - 1;

        while (star)
        {
            cout << "*";
            star = star - 1;
        }

        cout << endl;
        row = row + 1;
    }
}