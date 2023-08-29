#include<iostream>
#include<list>


using namespace std;

int main(){
    list<int> l;


//creating a list with 5 element as 100
    list<int> n(5,100);
    cout<<"print n "<<endl;

    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl; 

    

// basic push pop operation in list
    l.push_back(1);
    l.push_front(2);
    l.push_front(2);
    l.push_front(2);


    for(int i:l){
        cout<<i<<" "; 
    }

    cout<<endl;


// erasing the elements from list
    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l){
        cout<<i<<" "; 
    }
    cout<<endl<<" Size of list "<<l.size()<<endl;

}