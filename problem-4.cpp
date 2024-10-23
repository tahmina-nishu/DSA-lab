#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter the size of array : ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int even[n];
    int odd[n];

    cout << "\n Even numbers : ";
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }

    cout << "\n Odd numbers : ";
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }

    return 0;
}
