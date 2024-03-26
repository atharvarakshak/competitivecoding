#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        long long n,ans=0;
        cin>>n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
                cin>>a[i];
        }
        for(int i=n-2;i>=0;i--){
            while(a[i]>=a[i+1] && a[i]>0){
                a[i]/=2;
                ans++;
            }
            if(a[i]==a[i+1]){
                ans=-1;
                break;
            }
        }
        cout<<ans<<"\n";
        
    }
}