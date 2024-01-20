#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, oc = 0;
    cin >> n >> k;
    unordered_map<char, int> map;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
      map[s[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
      if (map[s[i]] % 2 != 0)
      {
        oc++;
        map[s[i]] = 0;
      }
    }

    if ((n - k) % 2 == 0)
    {
      if ((k - oc) >= 0 && (k - oc) % 2 == 0)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
    else
    {
      if ((k - oc + 1) >= 0 && (k - oc + 1) % 2 == 0)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
}