
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

    int pos;

    cout << "\nEnter the position of the value you want to delete : ";
    cin >> pos;

    for(int j = pos; j < n; j++)
    {
         arr[j] = arr[j+1];
         n --;
    }

    cout << "The array after deleting the value: ";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
