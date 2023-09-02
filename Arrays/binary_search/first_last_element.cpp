// First and last position of element in sorted array
#include <iostream>
using namespace std;

int left_mst_pstn(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (key == arr[mid])
        { // jbb  apni key jo hai wo array k middle element k barabar hai aggar han to...
            // apna end jo hai wo mid se ek kadm piche shift ho jae
            ans = mid;
            end = mid - 1;
        }

        else if (key < arr[mid]) // agr key choti h  middle se to end ko mid se ek kadm piche kishka do.
        {
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        // cout << "in function left  " << mid << "  \n";

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
        // cout << "in function right   " << ans << " \n ";
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
    int right_mst_element = right_mst_pstn(arr_main, size, key);

    cout << "left most position of your element is:  " << left_mst_element << endl;
    cout << "right most position of your element is:  " << right_mst_element << endl;
}