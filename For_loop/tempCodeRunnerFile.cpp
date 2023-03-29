#include<iostream>
using namespace std;

int main(){

    
    int n ;
    cout<< "enter an value for n"<<endl;
    cin >>  n;

    int  a = 0 ,sum = 0, b = 1;

    cout<<a<<" "<<b<<" ";

    for(int i = 1; i <= n-2 ; i++ ){ //n-2 bcz 2 letter are already printed

        int next_number = a + b;

        cout<<next_number<<" ";

        a = b;
        b = next_number; 
    }

    cout<<endl;



}
