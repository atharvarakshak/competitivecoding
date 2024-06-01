#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    
    cin >> t;

   while(t--){

        ll n,m;
        cin>>n>>m;
        int l = max(n-m,0LL);
        int r = n+m;
        int ans =0;
        for (int i = 0; i < 32; i++)
        {
            int c = r/(1<<i);
            if(c%2){
                ans|=1LL<<i;
                continue;
            }
            // else if(l==0){
            //     if(c) {
            //         ans|=1LL<<i;
            //         continue;
            //     }
            // }
            int c2 = l/(1<<i);
            if(c!=c2){
                    ans|=1LL<<i;

            }

        }
        
            cout<<ans<<endl;
       
   }
}