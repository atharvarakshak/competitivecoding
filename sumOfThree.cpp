#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    int a, b, c;
    while (t > 0)
    {
        int s = 0, d = 0;
        cin >> n;
        int x = (n - 1) / 2;
        if (((x + 1) % 3) != 0)
        {
            a = x + 1;
        }
        else
        {
            a = x + 2;
        }
        for (int i = a - 1; i >= 1; i--)
        {
            if (a + i != n)
            {
                if (i % 3 != 0)
                {
                    b = i;
                    break;
                }
            }
        }

        for (int i = 1; i < b; i++)
        {
            if (i % 3 != 3)
            {
                if (a + b + i == n)
                {

                    c = i;

                    break;
                }
               
            }
        }
        if (sqrt(n)==(int)sqrt(n))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << a << " "<<b<<" "<<c<<endl;
        }
        t--;
    }
}