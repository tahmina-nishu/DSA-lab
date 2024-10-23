#include<iostream>
using namespace std;

int main()
{
    string S, P, X;
    cin >> S >> P;

    int n = 0;
    while(n < S.size())
    {
        X = S.substr(n,2);
        if(X == P)
        {
            S.erase(n,2);
            break;
        }
        n++;
    }

    cout << S;

    return 0;
}
