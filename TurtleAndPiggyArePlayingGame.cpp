#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    
    cin >> t;

   while(t--){
        ll l,r,x=0;
        cin>>l>>r;
        
        
        // cout<<__lg(r)<<endl;
        while(r!=1){
            r/=2;
            x++;
        }
        cout<<x<<endl;
   }
}