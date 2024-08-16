#include <bits/stdc++.h>
using namespace std;
#define int long long

void check(string &s, vector<int> &a){
    int n = a.size();
    if(s.size()!=n){
        cout<<"NO\n";
        return;
    }
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]] = a[i];
    }
    for(int i=0;i<n;i++){
        if(mp[s[i]]!=a[i]){
            cout<<"NO\n";
            return;
        }
    }
    unordered_map<int,char> mp2;
    for(int i=0;i<n;i++){
        mp2[a[i]] = s[i];
    }
    for(int i=0;i<n;i++){
        if(mp2[a[i]]!=s[i]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

void solve(){
    int n,m;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        check(s,a);
    }
}

int32_t main(){
    int t=1;
    cin>>t;
    while(t--)
        solve();
}