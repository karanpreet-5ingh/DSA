// minimum value of  sorted and rotated array



#include<iostream>

using namespace std;

int get_pivot(int arr[], int size )
{
    int start  = 0;
    int end = size - 1;
    int mid = start + end  / 2 ;
    
    
    while(start < end) // yahn pr dhayan dena h ki <= nhi lagaya bcz equal laga diya to line compare kaise hogi 
    {
        if (arr[mid] >= arr[0]) // mtlb ye line 1 pr h jiska mtlb hme start ko utha kr aage rkhna h.
        {
            start = mid + 1; 
        }

        else
        {
            end = mid;
        }
        
        mid = start + end / 2;
    } 

    return end;
}


int main()
{

    int arr[5] = {3, 8, 10, 17, 1 };
    int ans = get_pivot(arr, 5);
    
    cout<<endl <<"The pivot is at position-> "<<ans<<" whose value is "<<arr[ans]<<endl;
}