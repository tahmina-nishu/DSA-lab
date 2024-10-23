#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int nmbr;
    cout << "Enter the number you want to search : ";
    cin >> nmbr;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == nmbr)
        {
            cout << nmbr << " is found at position " << i << endl;
            return 0;
        }
    }

    cout << "The number is not found." << endl;

    return 0;
}
