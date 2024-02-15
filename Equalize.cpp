#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
     while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int c=0,p=0,x=INT_MIN,d=0,q=INT_MAX;
        for(int i=1;i<n;i++){
            if(a[i] == a[i-1]+1){
                c++;
                int x = max(x,c);
            }
            else{
                c=1;
            }
            int d = a[i]-a[i-1];
            q=min(q,d);

        }
        
     }
}