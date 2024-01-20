#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,count=0;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]-a[0]<<endl;
    }
}