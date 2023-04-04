// First and last position of element in sorted array
#include <iostream>
using namespace std;

int left_mst_pstn(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end)
    {

        if (key == arr[mid])
        { // jbb  apni key jo hai wo array k middle element k barabar hai aggar han to...
            // apna end jo hai wo mid se ek kadm piche shift ho jae
            ans = mid;
            end = mid - 1;
            cout << end;
        }

        else if (key < arr[mid]) // agr key choti h  middle se to end ko mid se ek kadm piche kishka do.
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2; // mid fir se update kr do.
    }
    return ans;
}

int right_mst_pstn(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end)
    {

        if (key == arr[mid])
        { // jbb  apni key jo hai wo array k middle element k barabar hai aggar han to...
            // apna end jo hai wo mid se ek kadm piche shift ho jae
            ans = mid;
            start = mid + 1;
            
        }

        else if (key < arr[mid]) // agr key choti h  middle se to end ko mid se ek kadm piche kishka do.
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2; // mid fir se update kr do.
    }
    return ans;
}

int main()
{
    int arr_main[7] = {1, 2, 3, 3, 3, 3, 3};
    int key = 3;
    int size = 7;
    int left_mst_element = left_mst_pstn(arr_main, size, key);
    int count = 0;
    ////////////////////////// METHOD1 JO MAINE SOCHA HAI /////////////////////////////////////
    for (int i = left_mst_element; i < size; i++)
    {
        if (arr_main[i] == key)
        {
            count += 1;
        }
    }

    cout << "\n\nyour " << key << " comes " << count << " times in array" << endl;
    //////////////////////////////////////////////////////////////////////////////////////////

    /////////////////////////// METHOD 2 //////////////////////////////////////////////////////

    int right_mst_element = right_mst_pstn(arr_main, size, key);

    int total_occurance = (right_mst_element - left_mst_element) + 1;
    cout<<"\n\n USING METHOD 2 \ntotal number occurance is "<<total_occurance<<endl;
}