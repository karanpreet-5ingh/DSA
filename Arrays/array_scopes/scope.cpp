#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << " Inside the function" << endl;
    // printing array
    for (int i=0; i < n; i++)
    {
        arr[i] = arr[i] + 1;
        cout << arr[i] << " ";
        
    }

    cout << " Going  back to the main function" << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    cout << " printing main function" << endl;

    // cout<<sizeof(arr)<<endl;

    // printing array
    for (int i= 0; i < 3; i++)
    {
        cout << arr[i] << " ";
        
    }
}


// dekho function mai aagr array change kroge to ye change sirf function mai nhi
// blki main wale aary mai aa jaega bcz hum array ka address pass krwate h function mai
