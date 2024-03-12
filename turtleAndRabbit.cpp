#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    
    cin >> t;

   while(t--){
        ll n;
        cin>>n;
        vector<int> a(n),p(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
           
        }
        p[0]=a[0];
        for (int i = 1; i < n; i++)
        {
         
            p[i]=p[i-1]+a[i];
        }
        ll q;
        cin>>q;
       while(q--){
        ll l,u;
        cin>>l>>u;
        l--;
        ll x=u;
        if(l>0)x+=p[l-1];
        int lb=(lower_bound(p.begin(),p.end(),x)-p.begin());
        if(lb<=l){
            cout<<l+1<<" ";
        }
        else if(lb>=n){
            cout<<n<<" ";
        }
        else{
            if(abs(p[lb]-x)<=abs(p[lb-1]-x)){
                cout<<lb+1<<" ";
            }
            else{
                cout<<lb<<" ";
            }
        }
    }
              cout<<"\n";
        
   }
}