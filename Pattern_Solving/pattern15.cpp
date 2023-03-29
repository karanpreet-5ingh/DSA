/*
using extra character

A
BB
CCC
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 3, row = 1, col;
    // cout<<"enter a value for n";
    // cin>>n;

    while (row <= n)
    {
        col = 1;
        char ch = 'A' + row - 1;
        while (col <= row)
        {
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}