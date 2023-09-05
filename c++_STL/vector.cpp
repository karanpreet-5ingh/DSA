// dekho vector ki capacitiy dynamic hai jaise jasie hmm last me phunchte jaenge iska size bhadta jaega.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1);// 5 size ka vector bana and saare elemen ko 1 se initialize kr de... or default me 0 se initialize ho jaega 
    cout<<"print a -> "<<endl;
    for(int i:a ){

        cout<<"element "<<a.at(i)<<" ->"<<"  " <<i<<" ";

    }cout<<endl;



/// naya vector banao jisme a k  saare element copy krwa do

    vector<int> last(a);
    cout<<"print last -> "<<endl;
    for(int i:last ){

        cout<<"element "<<last.at(i)<<" ->"<<"  " <<i<<" ";

    }cout<<endl;



    cout<<"capacity -> "<<v.capacity()<<endl;


    v.push_back(1);
    cout<<"capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl;
    cout<<"size -> "<<v.size()<<endl;

    cout<<"Element at 2nd index -> "<<v.at(2)<<endl;

    int size =  v.size();
    for(int i=0;i<size;i++){
        cout<<v.at(i)<<endl;
    }

    cout<<"Front -> "<<v.front()<<endl;
    cout<<"back -> "<<v.back()<<endl;



//pop a element out of vector
    cout<<"Before pop -> "<<endl;
    for(int i:v ){

        cout<<i<<" ";

    }cout<<endl;

    v.pop_back();

    cout<<"After pop -> "<<endl;
    for(int i:v ){

        cout<<i<<" ";

    }cout<<endl;


// push an element to the vector



cout<<"Before clear size "<<v.size()<<endl;
v.clear();
cout<<"Ater clear size "<<v.size()<<endl;



cout<<"But see the capacity After clear size...  "<<v.capacity()<<endl;

    
}