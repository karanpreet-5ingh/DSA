#include <iostream>
using namespace std;
int getmax(int num[], int n)
{
    int mini = INT8_MIN; // apko pata hai int ki ek ange hoti h to integer ki minimun value rehti h "INT8_MIN" mai
    // and int ki max vlaue rehti  "INT8_MAX"  me

    for (int i = 0; i < n; i++)
    {
        if (num[i] > mini)
        {
            mini = num[i];
        }
    }
    return mini;
}

int getmin(int num[], int n)
{
    int min = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout<<"maximum value is: "<<getmax(num,size)<<endl;
    cout<<"minimun value is: "<<getmin(num,size)<<endl;
}
