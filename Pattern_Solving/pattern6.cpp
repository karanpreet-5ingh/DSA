#include<iostream>
using namespace std;
/*
123
456
789
*/


int main(){

    int n , i =1;
    cout<<"enter a value for n";
    cin>>n;
    int k=1;
    while(i<=n){
        
        int l=1, j=k;

        while(l<=n){

            cout<<j<<" ";
            j = j+1;
            k=j;
            l=l+1;

        }

        cout<<endl;
        i = i+1;

    }


}
