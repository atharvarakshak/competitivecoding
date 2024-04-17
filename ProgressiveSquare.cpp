#include <bits/stdc++.h>
 
using namespace std;

void solve() {
    long long n,c,d,mn=INT_MAX;
    cin>>n>>c>>d;
    vector<long long> b(n*n),a;
    
    for(int i=0;i<n*n;i++){
        cin>>b[i];
        mn=min(mn,b[i]);
    }

    queue<long long> q;
    q.push(mn);
    long long v=mn;
    a.push_back(mn);
    for(int i=1;i<n;i++){
        v+=d;
        q.push(v);
        a.push_back(v);
    }
    for(int i=0;i<n-1;i++){
        long long s = n;
        while(s--){
           long long f = q.front();
           q.pop();
           q.push(f+c);
           a.push_back(f+c);

        }
    }
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());

    if(a==b){
        cout<<"YES\n";
    }
    else{

        cout<<"NO\n";
    }



}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}