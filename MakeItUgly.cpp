#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        long long n,c,d=-1,ans=INT_MAX;
        cin>>n;
        c=n;
        vector<long long> a(n);

        for(int i=0;i<n;i++){

            cin>>a[i];
        }
        for(int i=0;i<n;i++){

                if(a[i]!=a[0]){
                   ans = min(ans, i - d - 1);
                   d=i;
                }
               
        }
         ans = min(ans, n - d - 1);
              
        if(ans==n || a[0]!=a[n-1]){
            cout<<"-1\n";
        }

        else{
            cout<<ans<<endl;

        }

        
    }
}