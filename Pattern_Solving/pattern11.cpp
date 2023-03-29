#include<iostream>
using namespace std;
/*
1
23
456
78910
*/


int main(){

    int n , row = 1;
    cout<<"enter a value for n ";
    cin>>n;
    
    
    while(row <= n){
        int col = 1;
        int temp = row;

        while(col <= row){

            cout<<temp<<" ";
            temp = temp - 1;


            col = col + 1;
        }
        cout<<endl;
        
        row = row +1;
    }


}
