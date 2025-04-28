#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve()
{

    ll n;
    cin>>n;
    vector<vector<ll>> g(n,vector<ll>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>g[i][j];
        }
    }
    vector<ll> ans(2*n+1,0);

    for(int i=0;i<n;i++){
        ans[i+2] = g[0][i];
    }


    for(int i=1;i<n;i++){
        ans[i+1+n] = g[i][n-1];
    }
    ll c=0;
    for(int i=1;i<=2*n;i++){
        c+=i;
    }

    ll s = accumulate(ans.begin(),ans.end(),0LL);
    cout<<c-s<<" ";
    for(int i=2;i<=2*n;i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;

   
  
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