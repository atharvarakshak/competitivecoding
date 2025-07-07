#include <bits/stdc++.h>
using namespace std;
# define ll long long
int solve()
{
  ll n,s;
    cin >> n >> s;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll c=0;


        c += a[n-1]-a[0];
        c+=min(abs(a[0]-s),abs(a[n-1]-s));
    cout<<c<<endl;

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