/*
using extra character

A
BC
CDE
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 6, row = 1, col;
    char ch = 'A';
    // cout<<"enter a value for n";
    // cin>>n;

    while (row <= n)
    {
        col = 1;
        char ch = 'A' + row - 1;

        while (col <= row)
        {
            cout << ch;
            ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}