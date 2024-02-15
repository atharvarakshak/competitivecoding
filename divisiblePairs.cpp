#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        vector<int> a(n);
        map<pair<int,int>,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
           
        }
        int c=0,p,q,z=0;
        for(int i=0;i<n;i++){
            p = a[i]%x;
            q= a[i]%y;
            z += m[{x-p,q}];
            if(p==0){
                p=x;
            }
            m[{p,q}]++;
        }
        cout<<z<<endl;
    }
}