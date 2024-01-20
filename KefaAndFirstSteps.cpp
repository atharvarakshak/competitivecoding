#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=1,x=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            c++;
        }
        else{
            x=max(x,c);
            c=1;
        }
    }
    cout<<max(x,c)<<endl;
}