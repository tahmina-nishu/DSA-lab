///write a program to calculate the roots of the quadratic equation ax*2 + bx + c = 0 where a,b,c are known
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int d = b*b-4*a*c;

    if(d > 0)
    {
        double rootD = sqrt(d);

        double x1 = (-b + rootD) / 2 * a;
        double x2 = (-b - rootD) / 2 * a;

        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x1 << endl;
    }

    else if(d == 0)
    {
        double x = -b / (2 * a);
        cout << "Unique Solution, x = " << x << endl;
    }
    else
        cout << "The equation has no real solution." << endl;

    return 0;
}
