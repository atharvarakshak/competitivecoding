#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        unordered_map<ll,ll> map;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            map[a[i]]=1;
        }
        ll mex=0;
        for (int i = 0; i < 1e5+5; i++)
        {
            if(map[i]==0){
                mex = i;
                break;
            }
        }
        if(mex ==0){
            cout<<"2\n";
            cout<<"1"<<" "<<"1\n";
            cout<<"2"<<" "<<n<<"\n";

        }
        else{
            map.clear();
            ll left =0;
            vector<pair<ll,ll>> ans;
            for(int i=0;i<n;i++){
                if(a[i]<mex){
                    map[a[i]]=1;
                }
                if(map.size()==mex){
                    ans.push_back({left+1,i+1});
                    left = i+1;
                    map.clear();
                }
            }
            ans[ans.size()-1].second=n;
            if(ans.size()<2){
                cout<<"-1\n";
            }
            else{
                cout<<ans.size()<<"\n";
                for(int i=0;i<ans.size();i++){
                    cout<<ans[i].first<<" "<<ans[i].second<<"\n";
                }
            }
        }

        

        

    }
}