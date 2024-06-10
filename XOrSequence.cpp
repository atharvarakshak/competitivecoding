#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
   ll a,b;
    cin>>a>>b;
    for (int bit = 0; bit <= 30; bit++)
    {
        if(((a>>bit)&1)!=((b>>bit)&1)){
            cout<<(1LL<<bit)<<endl;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}