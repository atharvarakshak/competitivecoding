#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve()
{
  ll n,m,l,r;
  cin>>n>>m>>l>>r;

  ll x=0,y=0;

  while(n>0 && m>0){
    if(x>l){
        x--;
        n--;
        m--;
    }
    if(y<r && m>0){
        y++;
        n--;
        m--;
    }
  }
  cout<<x<<" "<<y<<endl;

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