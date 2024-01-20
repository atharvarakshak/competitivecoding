#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n;
    vector<pair<int,int>> a(n);
    // unordered_map<int,int> a(n),b(n);
     for(int i=0;i<n;i++)
    {
        cin>>x;
        a[i].first=x;
        a[i].second=i;


    }
    vector<int> b(n);
  
   sort(a.begin(),a.end());
   reverse(a.begin(),a.end());
    // sort(a.begin(),a.end(),greater<int>());
   for(int i=0;i<n;i++)
    {
        b[a[i].second]=i+1;


    }
   for( auto i:b)
   {
    cout<<i<<" ";
   }
   cout<<"\n";
   
}
int main()
{
    int t,n;
    cin>>t;
    
    while(t>0)
    {
        solve();
        t--;
    }
    
}