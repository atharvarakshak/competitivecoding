#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int unhappy = 0;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      if (x == i)
      {
        unhappy++;
      }
    }
    int ans;
    if (unhappy % 2 == 0)
    {
      ans = unhappy / 2;
    }
    else
    {
      ans = unhappy / 2 + 1;
    }

    cout << ans << endl;
  }
}