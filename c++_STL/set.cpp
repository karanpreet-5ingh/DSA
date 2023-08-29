// sirf unique element hi rkhta h means aagr apne 5 baar 5 daal diya to wo bss ek hi baar 5 store krwaega 
// element bhi sorted order me niklte h 
// undorder ste jo hota h wo thoda slow rehta h set se bcz usme element sorted order me nhi rehte

#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(3);



    for(auto i:s){
        cout<<i<<endl;

    }cout<<endl;


    // set<int>::iterator it = s.begin();
    // it++;




}
