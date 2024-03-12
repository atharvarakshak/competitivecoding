#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int x, y, k;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
                cin>>a[i];
        }
        sort(a.begin(),a.end());
        int i=a[0],j=a[1],k=a[n-2],l=a[n-1];
        cout<<2*(k+l)-2*(i+j)<<endl;
        
    }
}