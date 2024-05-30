#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,t;
    cin>>t;
    while(t--){
        ll n,m,maxi=INT_MIN;
        cin>>n>>m;
        vector<ll> a(n+m+1),b(n+m+1);
        for (int i = 0; i < n+m+1; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n+m+1; i++)
        {
            cin>>b[i];
        }
        maxi = max(n,m);
        int a=1,c=0;
        for(int i=0;i<n+m+1;i++){
            ll s =0;


            if(i==c){
                continue;
            }
            



            c++;
        }

        

    }
}   