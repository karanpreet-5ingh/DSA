#include <iostream>
using namespace std;
int reverse(int arr[],int size ){

    int start = 0;
    int end  = size - 1;
    while(start <= end ){
        swap(arr[start],arr[end]);
        start++;
        end--;

    
    }
   
}

int print_array(int arr[], int size){
    for(int i =0; i<size;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main()
{
    int arr[6] = {5, 7, 2, 3,5 ,4};
    print_array(arr,6);
    reverse(arr,6);
    print_array(arr,6);


    
   
}


