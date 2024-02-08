#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll sum_it(ll m) {
    ll sum=0;
    while(m) {
        sum += m%10;
        m/=10;
    }
    return sum;
}
int main()
{   
    ios;
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--) {
        ll n,b, one = 0 , two = 0;
        cin>>n;
        vector < ll > v;
        for(ll i = 0 ; i < n ; i++) {
            cin>>b;
            if(b == 1) 
                one++;
            else {
                two++;
                v.push_back(i+1);
            }
        }
        if(two&1) {
            cout<<-1;
        }
        else {
            if(two == 0) {
                cout<<1;
            }
            else {
                ll si = v.size()/2;
                si--;
                cout<<v[si];
            }
        }
        cout<<endl;
    }
 
    return 0;     
 }