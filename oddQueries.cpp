#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        long long n,q,p[200005];
        cin>>n>>q;
        vector<long long> a(n);
        vector<string> s;
        long long l,r,k;
        //prefix sum
        for(int i=1;i<=n;i++){
            cin>>a[i];
            
            p[i]=p[i-1];
            p[i]+=a[i];

        }
        
        for(int i = 0; i < q; i++){
            long long l,r,k;
            cin >> l >> r >> k;
            long long ans = p[n]-(p[r]-p[l-1])+k*(r-l+1);
            if(ans%2==1){
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        
    
    }
}