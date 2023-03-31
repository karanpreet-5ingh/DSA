#include <iostream>
using namespace std;
void unique(int arr[8], int size)
{  
    // int arr[]= odd[];

    int count[size]={0};

    for(int i=0 ; i<size ;i++){
        count[arr[i]] += 1;
    }
     
     for(int i=0; i<size; i++){
       cout<<count[i]<<"   ";
     
     }
     cout<<endl;
    
    for(int i=0; i<size; i++){
        if(count[i]==1){
            cout<<"unique no. : "<<i<<"  "<<endl;
        }
    }
}


int unique_xor(int arr[], int size)
{
// yahan pr we know ki jbb bhi kabi hmm kisi bhi 2 difffrent numbers ko XOR krwate hain to  woh 1 dete hai
// other wise same numbers pr XOR 0 deta hai
//  0 ^ 0 = 0
//  0 ^ 1 = 1
//  1 ^ 1 = 0
//  1 ^ 0 = 1
// is code ki limitation hai ki ye sirf given array me ek hi unique number ko dhund skta hai 
    int ans = 0;
    for(int i = 0 ; i<size ; i++){
        ans = arr[i]^ans;
    }

    return ans ;

}



int main()
{
    int even[8] = {5, 2, 3, 4, 6, 1, 7, 8};
    int odd[5] = {1,2 ,2,2,3};

    unique(even, 8);
    cout<<"\n\n\n";
    int ans =   unique_xor(odd,5);
    cout<<ans<<endl;



}