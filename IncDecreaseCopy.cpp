#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c=1,maxi1=INT_MIN,maxi2=INT_MIN,mini=INT_MAX;
        cin>>n;
        vector<ll> a(n),b(n+1);
        bool ok =true,yes=true;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];

            
        }
        for (int i = 0; i <=n; i++)
        {
            cin>>b[i];
            
          
        }
      
       
   
        for (int i = 0; i < n; i++)
        {
          
                c+=(abs(a[i]-b[i]));
            
        }
         for(int i=0;i<n;i++){
            if((b[n]<=b[i] && b[n]>=a[i]) || (b[n]>=b[i] && b[n]<=a[i]) ){
                ok =false;
            }
            mini = min({abs(b[n]-a[i]),abs(b[n]-b[i]) , mini}); 
        }
        if(!ok){
        cout<<c<<endl;

        }
        else{
        cout<<c+mini<<endl;

        }
        

        
    }
}