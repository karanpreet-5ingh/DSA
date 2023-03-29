#include<iostream>
using namespace std;

int main(){

    
    int n ;
    cout<< "enter an value for n"<<endl;
    cin >>  n;
    bool isprime = 1;
    //CHECK WETHER A GIVEN NUMBER IS PRIME OR NOT 

    for(int i = 2 ; i < n ; i++ ){
        if (n%i == 0){
            isprime = 0;
            cout<<i;
            break;
        }
    }
     
    if (isprime == 0){
         cout<<"NOT Prime"<<endl;         
    }

    else{
        cout<<"prime"<<endl;


    }









    /* PRINT N PRIME NUMBER
    for(int i = 2; i<=n; i++){

        if(n % i != 0) {
            cout<<i<<" ";

        }


    }
    */

}