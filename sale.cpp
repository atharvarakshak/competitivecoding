#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin>>n>>m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
   
    int s=0,c=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]<0 )
        {
            s+=a[i];
            c++;
        }
    }
    cout<<abs(s)<<endl;
}