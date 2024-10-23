
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "The array is : ";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    for(int i = 1; i < n-1; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

    cout << "\nThe array after sorting : ";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
