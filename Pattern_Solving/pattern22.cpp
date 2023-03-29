/*
using extra character

   1
  22
 333
4444


*/

#include <iostream>
using namespace std;
int main()
{
    int n = 4, i = 1, j;

    while (i <= n)
    {
        int space = n - i;
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
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}