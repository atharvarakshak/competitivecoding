#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n, k, x;
    cin >> t;
    while (t > 0)
    {
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            if (k != 0 && i == 0)
            {
                a[i] = i;
            }
            else if (i == 0)
            {
                a[i] = i + 1;
            }
            else if (k != 0 && i == 1)
            {
                a[i] = i - 1;
            }
            else if (k != 1 && i == 1)
            {
                a[i] = i;
            }
            else if (i == 1)
            {
                a[i] = i + 1;
            }
            else
            {
                if (k != x)
                {
                    a[i] = x;
                }
                else
                {
                    a[i] = x - 1;
                }
            }
        }
        int sum = 0;
        if (k-x = 2)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }

        t--;
    }
}