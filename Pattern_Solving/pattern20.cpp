/*
using extra character

****
 ***
  **
   *


*/

#include <iostream>
using namespace std;
int main()
{
    int n = 4, i = 1, j;

    while (i <= n)
    {
        int space = i - 1;
        j = 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
            j = j + 1; // bcz coloum bhi shift ho rahe h spaces k sath
        }
        // square matrice hai that is why coloumn <=n
        // stars tb tk print honge jbb tk coloumn end nhi hota.
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}