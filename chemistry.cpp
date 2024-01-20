#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, t, count = 0;
    string s;
    cin >> t;

    while (t--)
    {
         count = 0;
        cin >> n >> k;
        string s;
        unordered_map<char, int> umap;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            umap[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (umap[s[i]] % 2 != 0)
            {
                count++;
                umap[s[i]] = 0; // no rpeat counting
            }
        }
        if ((n - k) % 2 == 0)
        {
            if ((k - count) >= 0 && (k - count) % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if ((k - count + 1) >= 0 && (k - count + 1) % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}