#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
     ll n, m;
        cin >> n;
        vector<ll> a(n), b(n);
        map<ll, ll> extra;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        cin >> m;
        vector<ll> d(m);
        for (int i = 0; i < m; i++)
        {
            cin >> d[i];
        }
        ll c = 0;
        for (int i = 0; i < m; i++)
        {
           extra[d[i]]++;
        }
        
        ll cp = 0;
        bool ok = false;
      for(int i=0;i<n;i++){
        if(b[i]==d[m-1])ok=true;
        if(a[i]!=b[i]){
            if(extra[b[i]]>0){
                extra[b[i]]--;
                if(extra[b[i]]==0){
                    extra.erase(b[i]);
                }
            }
            else{
                cout<<"NO\n";
                return;
            }
        }
    }
    if(extra.size()>0&&ok==false){
                cout<<"NO\n";

    } else {
                cout<<"YES\n";

    }
       return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       solve();
       
    }
}