#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    int mid = (start + end) / 2;
    while (start <= end)
    {

        if (key == arr[mid])
        {
            return mid;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return -1; //if key is not present in the aray
}

int main()
{
    int even[4] = {2,3,7,5};
    int odd[5] = {2,5,3,6,7};
    int index  = binary_search(even, 4, 2);
    cout<< index<<endl;



    return 0; 
}
