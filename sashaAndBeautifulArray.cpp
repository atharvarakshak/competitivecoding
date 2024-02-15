#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, n;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int s=0;
        for(int i=1;i<n;i++){
            s+=a[i]-a[i-1];
        }
        cout<<s<<endl;
    }
}