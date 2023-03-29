/*
using extra character

   *
  **
 ***
****

*/

#include <iostream>
using namespace std;
int main()
{
    int n = 6, row = 1, col;

    while (row <= n)
    {
        col = 1;

        int space = n - row;

        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }

        cout << endl;

        row = row + 1;
    }
}