// stack use FIFO concept


#include<iostream>
#include<queue>

using namespace std;


int main(){
    queue<string> q;

    q.push("karan");
    q.push("preet");
    q.push("singh");


//printing top element
cout<<"size before pop -> "<<q.size()<<endl;
cout<<"Top element-> "<<q.front()<<endl;
q.pop();
cout<<"Top element-> "<<q.front()<<endl;
cout<<"size after pop-> "<<q.size()<<endl;

}