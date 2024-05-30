#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<int,int>>p;
        for(int i=0; i<n; i++){
            int temp1,temp2;
            cin>>temp1>>temp2;
            p.push_back({temp1,temp2});
        }
        int x1,y1,x2,y2;
        x1=p[a-1].first;
        y1=p[a-1].second;
        x2=p[b-1].first;
        y2=p[b-1].second;
        int ans1=abs(x2-x1) + abs(y2-y1);
        int d1=LLONG_MAX;
        for(int i=0; i<k; i++){
           int cost=abs(x1-p[i].first) + abs(y1-p[i].second);
           d1=min(d1,cost);
        }
        int d2=LLONG_MAX;
        for(int i=0; i<k; i++){
           int cost=abs(x2-p[i].first) + abs(y2-p[i].second);
           d2=min(d2,cost);
        }
        int ans2=d1+d2;
        int ans=min(ans1,ans2);
        if(k==0){
            cout<<ans1<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }
    
}