#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> d;
    d.push_back(1);
    d.push_front(2);


    for(int i:d){
        cout<<i<<" ";
    }


    // d.pop_back();
    // d.pop_front();
    // cout<<endl;


    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"Empty or not " << d.empty()<<endl;

    cout<<"Before erase " << d.size()<<endl;
// deque ko erase krewane k liye apko .erase( ) func use krna h then use batana h ki khan se khan tk erase krna h queue ko!!
    d.erase(d.begin(),d.begin()+1);


    cout<<"After erase "<< d.size()<<endl;
    





}