#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, n, k;
 
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        map<long long,long long> m;
        for (int i = 0; i < n; i++)
        {
                cin>>a[i];
                m[a[i]]++;

        }
        int mex=0;
        for(int i=0;i<=n;i++){
            if(m[i]==0){
                mex=i;
                break;
            }
        }
        int firstone =0;
        for(int i=0;i<=n;i++){
            if(m[i]==1){
                firstone=i;
                break;
            }
        }
        int mex2=0;
        for(int i=firstone+1;i<=n;i++){
            if(m[i]<=1){
                mex2=i;
                break;
            }
        }
         mex=min(mex,mex2);
        cout<<mex<<"\n";
        
    }
}