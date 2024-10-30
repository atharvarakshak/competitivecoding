#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n%2==0){
    ll ans =0;
        for (ll i = 0; i < n; i+=2)
        {
            ans = max(ans,a[i+1]-a[i]);
        }
    cout<<max(ans,1LL)<<endl;
        
    }
    else{
        ll ans =1e18;
        for (ll  i = 0; i < n; i+=2)
        {
            ll res =0;
            for (ll j = 0; j < n;j+=2)
            {
                if(i==j){
                    j--;
                    continue;
                }
                res=max(res,a[j+1]-a[j]);
            }
            ans = min(ans,res);
            
        }
        
    cout<<max(ans,1LL)<<endl;
    }
    

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