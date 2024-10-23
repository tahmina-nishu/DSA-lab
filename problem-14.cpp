#include<iostream>
using namespace std;

int main()
{
    string S, P;
    cin >> S >> P;

    int k = 0;
    int maxx = S.size()-P.size()+1;
    int index = 0;

    while(k <= maxx)
    {
        for(int i = 1; i <= P.size(); i++)
        {
            if(P[i] == S[k+i-1])
                continue;
            index = k;
        }
        k++;
    }
    cout << index;

    return 0;
}
