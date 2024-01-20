#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int ans=-1;
        for ( int i=0; i<n ; i++)
        {
            for(int j=0;j<n;j++){
                if(__gcd(a[i],a[j])==1){
                    ans=max(ans,(i+j)+2);
                }
            }
        }
        cout<<ans<<endl;
        
        
    }
}
