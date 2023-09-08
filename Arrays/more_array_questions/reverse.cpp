#include<iostream>

using namespace std;

void printarr(int arr[], int n){
    for(int i=0; i<n; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[5] = {1,3,2,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-1-i]);
    }

    printarr(arr,n);
}