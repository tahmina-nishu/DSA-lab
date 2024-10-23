#include<iostream>
using namespace std;

int main()
{
    string T, S;
    int k;

    cout << "Enter the main string : " ;
    cin >> T;
    cout << "Enter the string and the position you want to insert : ";
    cin >> S;
    cin >> k;

    T.insert(k, S);

    cout << T << endl;

    return 0;
}
