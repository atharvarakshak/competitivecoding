#include <bits/stdc++.h>
using namespace std;
#define ll long long

int func(int t,int a, int b, int x, int y)
{
    int cur = 0;
        cur += max((t - a + x) / x, 0);
        t -= max((t - a + x) / x, 0) * x;
        cur += max((t - b + y) / y, 0);
        return cur;
}
int solve()
{
    ll k,a,b,x,y;
    cin >> k >> a >> b >> x >> y;
    cout<<max(func(k, a, b, x, y), func(k, b, a, y, x)) << endl;
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}