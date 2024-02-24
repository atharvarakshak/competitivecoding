#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<long long> a(n+1,0);
            int c=0,p=0;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            if(a[i-1]==0 && a[i]!=0){
                c++;
            }

        }
        c = min(c,2);
        cout<<c<<endl;
        
    }
}