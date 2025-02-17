#include <bits/stdc++.h>
using namespace std;

/* TYPES */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()

int solve()
{
    ll n,k;
    cin>>n>>k;
    ll a,b;
    map<ll,ll> mp;

    f(i,0,k){cin>>a>>b;
        mp[a]+=b;
    }

    vll v;

    for(auto  &x: mp){



        v.pb(x.second);
    }

    sort(v.begin(),v.end());

    ll jj = v.size()-1;

    ll ans =0;


    while(jj > -1 && n>0){
        ans+=v[jj];
        jj--;
        n--;
    }
    cout<<ans<<endl;



    return 0;
}
/* Main() function */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
