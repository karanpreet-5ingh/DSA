#include <iostream>
using namespace std;

void printarr(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << "  ";
    }
    cout << endl;
}

int main()
{

    int arr[4] = {4, 3, 25, 1};
    int n = 4;

    printarr(arr, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    printarr(arr, n);
}