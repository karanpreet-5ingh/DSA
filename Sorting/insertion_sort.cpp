#include<iostream>

using namespace std;

void print_arr(int arr[], int size){
    for(int i = 0;  i<size; i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}


int main(){
    int arr[5]={64, 25, 12, 22, 11};
    int n = 5;
    
    for(int i=0; i<n; i++){
        int j = i + 1;
        while(arr[i]>arr[j] && j>=0){
            print_arr(arr,n);
            swap(arr[i],arr[j]);
            i = i - 1;
            j = j - 1;  
        
        }
        
    }   

    print_arr(arr,n);
}