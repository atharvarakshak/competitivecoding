#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    while(t--){
        int x,k,m=0;
        cin>>n>>x;
        vector<int> a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           
        }
        int p=0;
        p=a[0];
        m=p;
      
        for(int i=1;i<n;i++)
        { 
            
            p=a[i]-a[i-1];
            
             m = max(m,p);
        }
        p = 2*(x - a[n-1]);
        m = max(m,p);
            cout<<m<<endl;

    }
}