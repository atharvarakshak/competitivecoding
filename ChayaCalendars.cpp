#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, t, count = 0;
    string s;
    cin >> t;

    while (t--)
    {
        int n,p=0;
        cin>>n;
        set<int> s;
        vector<int> a(n);
        int ans=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            ans =( ans / x)+1;
            ans *= x;
        }
        
        // int count =1;
        
        cout<<ans<<endl;
    }
}