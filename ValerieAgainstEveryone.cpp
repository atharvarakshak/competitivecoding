#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0; i<n; i++)cin>>a[i];
       set<int>s;
       for(int i=0; i<n; i++){
        s.insert(a[i]);
       }
       if(s.size()==n){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
}