/* 
AAA
BBB
CCC

*/

#include<iostream>
using namespace std;
int main(){
     
     int n, i =1;
     cout<< "please enter a value for n: ";
     cin>>n;
     while(i<=n){
         char ch = 'A' + i - 1;
         int j =1;
         while(j<=n){
             cout<<ch;
             j =j+1;

         }
          i = i+1;
          cout<<endl;



     }






}