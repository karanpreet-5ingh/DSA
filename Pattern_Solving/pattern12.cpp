


#include<iostream>
using namespace std;
int main(){

/*
*************************
ABCD                    
EFGH                    
IJKL                    
*************************

*/

    int i =1, n;
    cout<<" enter the size";
    cin >>  n;
    
    char ch = 'A'     ;
while(i<=n){
    int j = 1;
    
    
    while(j<=n){
        

        cout<<  ch  ;

        
        j = j + 1;
        
        ch = ch + 1;

    }

    cout<<endl;
    i += 1;

    

}

   



}

