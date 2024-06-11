#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin>>n;
    vector<ll> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    ll s=0,c=0,m=INT_MIN;
    bool ok  =  false;
    
    for (int i = 0; i < n; i++)
    {
        m=max(m,a[i]);
      
        s+=a[i];
        if(s==2*m){
            c++;
        }
       

    }
   

        cout<<c<<endl;
    // }
    
  }
}