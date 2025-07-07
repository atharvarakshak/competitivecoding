#include <bits/stdc++.h>
using namespace std;
# define ll long long
int solve()
{
  ll n;
    cin >> n;
    string s;
    cin >> s;
    bool ok1 = false, ok2 = false;
    map<char, ll> m;
    m[s[0]]++;
    for(ll i = 1; i < n-1; i++){
        if(m[s[i]]){
            ok1 = true;
            break;
        }
        m[s[i]]++;
    }
    m.clear();
    m[s[n-1]]++;
    for(ll i = n-2;i>=1; i--){
        if(m[s[i]]){
            ok1 = true;
            break;
        }
        m[s[i]]++;
    }
   if(ok1 || ok2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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