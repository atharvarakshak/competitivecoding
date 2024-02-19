#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,x,y;
        cin >> n>>x>>y;
        vector<long long > v(n);
        map<pair<long long,long long>,long long> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans=0;
        
        for(int i=0;i<n;i++){
            long long val1 = v[i]%x,val2 = v[i]%y;
            long long req1 = (x - val1)%x;
            long long req2 = (val2);
            ans+=(mp[{req1,req2}]);
            mp[{val1,val2}]++;
        }
        cout<<ans<<endl;;
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