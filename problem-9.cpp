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

    int UB = n - 1;
    int LB = 0;

    for(int i = 0; i < n; i++)
    {
        int mid = (UB + LB) / 2;
        if(nmbr == arr[mid])
        {
            cout << nmbr << " is found at position " << mid << endl;
            return 0;
        }
        else if(nmbr < arr[mid])
            UB = mid - 1;
        else
            LB = mid + 1;
    }
    cout << "The number is not found." << endl;


    return 0;
}

