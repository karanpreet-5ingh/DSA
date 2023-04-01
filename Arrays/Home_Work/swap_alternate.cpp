#include <iostream>
using namespace std;
void swap_alternate(int arr[8], int size)
{
    for (int i = 0; i < size; i = 2)
    { if(i<size){
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;}
    }
}

void printing(int arr[8], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "array: " << arr[i];
    }
}
int main()
{
    int even[8] = {5, 2, 3, 4, 6, 1, 7, 8};
    int odd[9] = {5, 2, 3, 2, 4, 6, 1, 7, 8};

    swap_alternate(even, 8);
    printing(even, 9);
}