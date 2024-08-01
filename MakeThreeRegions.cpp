#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int solve()
{
    ll n;
    cin>>n;
    string r1,r2;
    cin>>r1>>r2;


    ll i=0,j=2,c=0;

    while(j<n)
    {
       if((r1[i]=='x' && r1[i+1]=='.' && r1[j]=='x')  &&  (r2[i]=='.' && r2[i+1]=='.' && r2[j]=='.') ){
      
        c++;

       }
       else if(r2[i]=='x' && r2[j]=='x' && r2[i+1]=='.' ){
        if(  r1[i]=='.' && r1[i+1]=='.' && r1[j]=='.')
            c++;
        }

          i++;
        j++;
      
    }
    
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