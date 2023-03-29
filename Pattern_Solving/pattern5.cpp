#include<iostream>
using namespace std;
/*
321
321
321
*/


int main(){

    int n , i =1;
    cout<<"enter a value for n   "<<endl;
    cin>>n;

    while(i<=n){
        
        int j=n;

        while(j<=n & j > 0 ){

            cout<<j;
            j = j-1;

        }

        cout<<endl;
        i = i+1;

    }


}
