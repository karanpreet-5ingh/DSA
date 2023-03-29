#include<iostream>
using namespace std;
/*
1
23
456
78910
*/


int main(){

    int n , i =1;
    cout<<"enter a value for n ";
    cin>>n;
    
    
    while(i <= n){
        
        int j = 1;
        int count = i ;


        while(j <= i){
            cout<<count<<" ";
            
            count = count + 1;
            j = j + 1;

        }

        cout<<endl;
        i =i + 1;
    }


}
