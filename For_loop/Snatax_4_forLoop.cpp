#include<iostream>
using namespace std;

int main(){

    
    int n ;
    cout<< "enter an value for n"<<endl;
    cin >>  n;


/* Typical snatax

    cout<< "print  count from 1 to n"   <<endl;
    for( int i = 1; i <= n ; i++)
    {
        cout<< 1<<endl;

    }
*/


/*
// function that  behind for loop 

    int i = 1;

    for( ; ;)
    {
        if( i<=n){
            cout<< 1 <<endl;
            
        }
        else{

            break;

        }

        i++;
    

    }
*/


// FOR LOOP WITH MULTI VARIABLES
    for(int a = 0, b = 1, c = 2 ; a >= 0 && b >= 1, c >= 2 ; a-- , b -- , c--) {

        cout<< a<<" \n"<<b<<"\n"<<c<<"\n"<<endl;




    }





}


