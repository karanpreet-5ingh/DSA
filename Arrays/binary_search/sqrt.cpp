# include<iostream>

using namespace std;

int sqrt(int num){

    int start = 0 ; 
    int end = num;
    int ans = -1;


while (start < end )
{   int mid = start + end / 2; 
    int squar = mid * mid;

    if (squar == num)
    {
        return mid;
    }

    else if (squar > num)
    {
        end = mid - 1 ;
        
    }
    
    else
    {
        ans = mid;
        start = mid + 1;
    }
    
    mid = start + end / 2 ;
}
return ans;

}

int main(){
    int num = 16;
    int sqrt_ans = sqrt(num);

    cout<<sqrt_ans<<endl;

}