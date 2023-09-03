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

int bs(int arr[], int key, int start ,int end)

{
    int mid = (start + end) / 2;

    // cout<<" in binary search start end  mid"<< start<<mid<< end;


    while (start <= end)
    {   

        if (key == arr[mid])
        {
            return mid;
            // break;
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

    int arr[5] = {6, 7, 1, 2, 3 };
    int pivot = get_pivot(arr, 5);
    int key = 3;
    int n = 5 ; 
    // cout<<endl <<"The pivot is at position-> "<<pivot<<" whose value is "<<arr[pivot]<<endl;

    cout<<endl;
    if (arr[pivot]<= key && key <= arr[n-1] )
    
    {
        // cout<< endl <<arr[pivot]<<endl<< key<<endl << arr[n-1];

        int start = pivot;
        int end = n-1;
        
        int binary_search = bs(arr, key, start, end);
        if (binary_search == -1){
            cout<<"value not found !!!";
        }
        else{
        cout<<endl<<"binary search found element in line-1 --> " <<arr[binary_search]<< "  found at position "<<binary_search<<endl;
        }
    }

    else if (arr[0]< key <arr[pivot -1])
    {   
        
        int start = 0;
        int end = pivot - 1;
        cout<<endl;
        int binary_search = bs(arr,key,start,end);
                if (binary_search == -1){
            cout<<"value not found !!!";
        }
        else{
        cout<<endl<<"binary search is line-2 " <<arr[binary_search]<<" found at position "<<binary_search<<endl;
        }
        
    }
    
    
    
}