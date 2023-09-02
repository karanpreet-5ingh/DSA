#include<iostream>

using namespace std;

int mountain(int arr[], int size )
{
    int start  = 0;
    int end = size - 1;
    int mid = start + end  / 2 ;
    
    while(start < end) // yahn pr dhayan dena h ki <= nhi lagaya bcz equal laga diya to line compare kaise hogi 
    {
        if (arr[mid] < arr[mid +1]) // mtlb ye line 1 pr h jiska mtlb hme start ko utha kr aage rkhna h.
        {
            start = mid + 1;
            
        }

        else if (arr[mid] > arr[mid+1])
        {
            end = mid;
        }
        
        mid = start + end / 2;
    } 

    return start;
}


int main()
{

    int arr[5] = {7,8,10,7,6};
    int ans = mountain(arr, 5);
    
    cout<<endl <<"The peak of mountain is at position-> "<<ans<<" whose value is "<<arr[ans]<<endl;
}