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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int l=0,r=n-1;
        while(l<r){
            if(a[l]==1){
                break;
            }
            l++;
           
        }
        while(l<r){
            if(a[r]==1){
                break;
            }
            r--;
           
        }
        // cout<<l<<r<<endl;
        int c=0;
        for(int i=l;i<=r;i++){
            if(a[i]==0){
                c++;
            }
        }
        cout<<c<<endl;
        
    }
}