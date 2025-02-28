#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll func(vector<int>& a, vector<int> b) 
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int i=0, j=0;
    int n =a.size(), m =b.size();
    while (i<n&&j<m) 
    {
        if (a[i]<b[j]) 
        {
            b[j]=a[i];
            i++;
        }
        j++;
    }
    return accumulate(b.begin(),b.end(),0LL);
}
 
int solve()
{
   ll n ,l ,r;
    cin>>n>>l>>r;
    vector<ll> a(n);
    for(int i=0;i<n;i++){ cin>>a[i];}
    
    l--; r--;
    ll sum=0;
    vector<int> left, right, segment;
    for(int i=0;i<n;i++)
    {
        if(i<l)
        {
            left.push_back(a[i]);
        }
        else if(i>r)
        {
           right.push_back(a[i]);
        }
        else
        {
            segment.push_back(a[i]);
            sum+=a[i];
        }
    }

    cout<<min({sum,func(left,segment),func(right,segment)})<<endl;

    
    
    
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

/*  
    l = 1 , r= 3
    num 3 6 6 4 3 2
        1 2 3 4 5 6 


*/