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
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    printarr(arr, n);
}