#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

int main() {
    int t;
    cin>>t;

    while(t--) {
       
   ll n,k;
   cin>>n>>k;
   vll a(n);
   vll b(n);
   for(int i=0;i<n;i++){

   cin>>a[i];
   }
   for(int i=0;i<n;i++){

   cin>>b[i];
   }
   ll k1=k*2;
   ll k2=k*2;
   vll ans1,ans2;
   map<ll,ll>mp;
   for(int i=0;i<n;i++){
       mp[a[i]]++;
   }
   for(int i=1;i<=n;i++){
       if(mp[i]==1&&k1>0){
           k1--;
           k2--;
           ans1.push_back(i);
           ans2.push_back(i);
       }
   }
   if(ans1.size()%2==1){
       ans1.pop_back();
       ans2.pop_back();
       k1++;
       k2++;
   }
   for(int i=1;i<=n;i++){
       if(mp[i]==2&&k1>0){
           k1-=2;
           ans1.push_back(i);
           ans1.push_back(i);
       }
   }
   for(int i=1;i<=n;i++){
       if(mp[i]==0&&k2>0){
           k2-=2;
           ans2.push_back(i);
           ans2.push_back(i);
       }
   }

        for (auto i:ans1) {
            cout <<i << " ";
        }
       cout <<"\n";

        for (auto i : ans2) {
            cout<<i<<" ";
        }
        cout <<"\n";
        }

    
}
