#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    map<int,int> mp;
    vector<int> a(n),x(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    for(int i=0;i<n;i++){
        cin>>x[i];
    } 
    for(int i=0;i<n;i++){
        mp[abs(x[i])]+=a[i];
    } 
    vector<pair<int,int>> v;
    for(auto i : mp){
        v.push_back({i.first,i.second});
    }
    int index =0;
    for(int i=0;i<n;i++){
        if(index>=v.size()){
            cout<<"YES"<<endl;
            return;
        }
        if(v[index].first <= i){
            cout<<"NO"<<endl;
            return;
            
        }
        int curr=k;
        while(index<v.size() && curr>0){
            if(v[index].second > curr){
                v[index].second-=curr;
                break;
            }
            else{
                curr-=v[index].second;
                v[index].second=0;
                index++;
            }
        }
    }
    if(v.back().second>0){
        cout<<"NO"<<endl;
            return; 
    }
    cout<<"YES"<<endl;
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