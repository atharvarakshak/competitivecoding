#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin>>n;
    vector<int> p(n+1),d(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
       
    }
    for(int i=1;i<=n;i++)
    {
        cin>>d[i];
    }
  vector<int> grp(n+1,-1);
    int k=1;
  for (int i = 1; i <= n; i++)
  {
    if(grp[i]!=-1) continue;

    grp[i] = k;

    int j = p[i];

    while(i!=j){
        grp[j]=k;
        j=p[j];
    }

    k++;


  }

  vector<bool> check(k+1,0);
  vector<int> sz(k+1,0);
  for (int i = 1; i <= n; i++)
  {
    sz[grp[i]]++;
  }

  int ans=0;

  for(int i=0;i<n;i++)
  {
    if(!check[grp[d[i+1]]])
    {
      check[grp[d[i+1]]]=1;
      ans+=sz[grp[d[i+1]]];
    }
    cout<<ans<<" ";
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