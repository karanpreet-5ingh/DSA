#include<iostream>
using namespace std;



int main(){

    int arr[5]={64, 25, 22, 12, 11};
    int n = 5;
    
    for (int  i = 0; i < n; i++)
    {


        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }

            
            
            
        }


    }

    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    

}