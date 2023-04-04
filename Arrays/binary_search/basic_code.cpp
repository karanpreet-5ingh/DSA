#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2 ; // chalaki kheli h taki kaafi badi key bhi aae to bhi int ki limit exeed na ho ske!!!


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
    int even[4] = {2,3,4,5};
    int odd[5] = {2,3,5,6,7};
    int index  = binary_search(odd, 4, 5);
    cout<< index<<endl;



    return 0; 
}




/*
Quiestion: binary search ki complexity O(log n) kaise ho skti h

Analysis of input size at each iteration of Binary Search:
1. At Iteration 1:
    Length of array = n

2.At Iteration 2:
    Length of array = n/2

3. At Iteration 3:
    Length of array = n/2^2 = n/4

4. Therefore, after Iteration k:
    Length of array = n/2k

Also, we know that after k iterations, the length of the array becomes 1 Therefore, the Length of the array 
n/2k = 1
=> n = 2k
Applying log function on both sides: 

=> log2n = log22k

=> log2n = k * log22

As (loga (a) = 1) Therefore, k = log2(n)
*/