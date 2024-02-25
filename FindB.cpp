#include <bits/stdc++.h>
using namespace std;
int main()
{
      long long t;
      cin>>t;
     while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long> a(n+1),cnt1(n+1),pref(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        cnt1[0]=0,pref[0]=0;
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+a[i];//current position tk ka sum
            if(a[i]==1){
                cnt1[i]=cnt1[i-1]+1;
            }
            else{

                cnt1[i]=cnt1[i-1];
            }
        }
        for(int i=0;i<q;i++){
            int l,r;
            cin>>l>>r;
            long long tot = cnt1[r]-cnt1[l-1];
            long long sum = pref[r]-pref[l-1];
            sum-=(r-l+1);
            if(tot == 0){
                if(l==r){
                    cout<<"NO"<<endl;
                }
                else{

                    cout<<"YES"<<endl;
                }
            }
            else{
                if(sum>=tot){

                    cout<<"YES"<<endl;
                }
                else{

                    cout<<"NO"<<endl;
                }
            }
        }


     }
}