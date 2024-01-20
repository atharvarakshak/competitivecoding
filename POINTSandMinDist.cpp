#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        long int sum=0;
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            sum+=a[i]-a[i+1];
        }
        for(int i=n+1;i<2*n;i++)
        {
            sum+=a[i]-a[i+1];

        }
        cout<<sum<<"\n";

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" "<<a[i+n]<<"\n";
        }



    }
}