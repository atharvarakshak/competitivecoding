#include <bits/stdc++.h>

using namespace std;

int main()
{
//    O(n+logn)
    long int t;
    cin >> t;
    while (t--)
    {
        int n,c=0,x;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        for(int i=1;i<=n;i++){
            
            c = __gcd(c,abs(a[i-1]-i));
        }
        cout<<c<<endl;
    }
}