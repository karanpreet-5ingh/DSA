// merge 2 sorted array and resultant aarray should also be sorted

#include<iostream>

using namespace std;


void print_arr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void merge_sorted_array(int arr1[],int n,int arr2[],int m,int arr3[] ){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){

        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i] ;
            i += 1;
            k += 1;
        }
        else{
        arr3[k] = arr2[j];
        j += 1;
        k += 1;}
    
        
    }

    while(i<n){
        arr3[k] = arr1[i];
        i += 1;
        k += 1;}


    while(j<m){
        arr3[k] = arr2[j];
        j += 1;
        k += 1;}


}


int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8]={};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr1[0]);

    merge_sorted_array(arr1,n,arr2,m,arr3);
    int k = sizeof(arr3)/sizeof(arr1[0]);
    print_arr(arr3,k);
}