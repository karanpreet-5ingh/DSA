#include<iostream>
using namespace std;

void print_array(int arr[], int n){

    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}

int main(){

    int arr[5]={12, 9 ,6, 5 ,4};
    int n = 5;
    
    for(int i=0; i<n ; i++){
        
        for(int j=0; j<n-i;j++){

            if(arr[j]>arr[j+1])
            {

                swap(arr[j],arr[j+1]);
            }

        }
        
        print_array(arr, n );
        cout<<endl;

    }



}