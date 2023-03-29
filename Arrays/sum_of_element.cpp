#include <iostream>
using namespace std;

void input_array(int num[11], int size)
{
    cout << "Enter the elements of array";
    int i = 0;
    while (i < size)
    {
        cin >> num[i];
        i = i + 1;
    }
}

void print_array(int num[11], int size)
{
    cout << "array is :  ";
    int i = 0;
    while (i < size)
    {
        cout << num[i];

        cout << " ";
        i = i + 1;
    }
    cout << endl;
}
void reverse_arrray(int num[11], int size)
{
    int temp = 0;
    int start = 0;
    int end = size - start - 1;
    while (start < end)
    {
        temp = num[start];
        num[start] = num[end];
        num[end] = temp;
        start = start + 1;
        end = end - 1;
    }
}
void swap_alternate_element(int num[11], int size)
{
    int temp = 0, i = 0;

    while (i < size - 1)
    {
        swap(num[i], num[i + 1]);

        i = i + 2;
    }
}

void find_unique(int num[100], int size)
{
    int i = 0, key;
    cout << "enter the value that you are looking for";
    cin >> key;

    while (i < size - 1)
    {
        if (num[i] == key)
        {
            cout << "\n your value is present at " <<i+1 << " position.";
            
        }

        i = i + 1;
    }

}

int main()
{
    int n, size = 11;
    /*to take inputs

    int num[100];
    cout << "enter the size of your array";
    cin >> size;
    input_array(num, size);*/

    int num[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    print_array(num, size);
    reverse_arrray(num, size);
    cout << "reversed ";
    print_array(num, size);
    reverse_arrray(num, size);
    swap_alternate_element(num, size);
    cout << "alternate swaped ";
    print_array(num, size);
    // int num1[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    find_unique(num, size);
    
}