#include<iostream>
using namespace std;
/*
1
22
333
4444

*/


int main(){

    int n , i =1;
    cout<<"enter a value for n ";
    cin>>n;
    

    while(i <= n){
        
        int j = 1;

        while(j <= i){
            cout<<i;
            j = j + 1;
        }

        cout<<endl;
        i =i + 1;
    }


}
