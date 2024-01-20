#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int x, y, k;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> k;
        if (x == y)
        {
            cout << x << endl;
        }
        else if (x > y)
        {
            cout << x << endl;
        }
        else
        {
            if (x + k >= y)
            {
                cout << y << endl;
            }
            else
            {
                cout << ((abs(y - (k + x))) * 2) + (x + k) << endl;
            }
        }
    }
}
