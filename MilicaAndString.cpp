#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int t, n, k;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        cin >> s;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if (c2 - k == 0)
        {
            cout << "0\n";
        }
        else if (c2 < k)
        {
            int z = 0;
            cout << "1\n";
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'A')
                    z++;
                if (z == k - c2)
                {
                    cout << i + 1 << " B\n";
                    break;
                }
            }
        }
        else
        {
            int z = 0;
            cout << "1\n";
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'B')
                    z++;
                if (z == c2 - k)
                {
                    cout << i + 1 << " A\n";
                    break;
                }
            }
        }
    }
}