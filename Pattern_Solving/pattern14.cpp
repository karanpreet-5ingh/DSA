/*
using extra character

ABC
BCD
CDE
*/


/*

#include <iostream>
using namespace std;
int main()
{
    int n = 9, row = 1, col;
    // cout<<"enter a value for n";
    // cin>>n;
    char ch = 'A';
    char store = 'A';
    while (row <= n)
    {
        col = 1;
        ch = store;
        while (col <= n)
        {

            cout << ch<<" ";

            if (col == 2)
            {
                store = ch;
            }
            col = col + 1;
            ch = ch + 1;
        }
        row = row + 1;
        cout << endl;
    }
}
*/