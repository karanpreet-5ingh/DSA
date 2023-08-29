// stack use LIFO concept


#include<iostream>
#include<stack>

using namespace std;


int main(){
    stack<string> s;

    s.push("karan");
    s.push("preet");
    s.push("singh");


//printing top element

cout<<"Top element-> "<<s.top()<<endl;
s.pop();
cout<<"Top element-> "<<s.top()<<endl;


cout<<"size of the stack-> "<<s.size()<<endl;

cout<<"Empty or not-> "<<s.empty()<<endl;
}