
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

    int value, pos;

    cout << "\nEnter the value and its position you want to insert respectively : ";
    cin >> value >> pos;

    for(int j = n; j >= pos; j--)
    {
        arr[j+1] = arr[j];
        if(j == pos)
        {
            arr[j] = value;
            n += 1;
            break;
        }
    }

    cout << "The array after inserting the value: ";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
