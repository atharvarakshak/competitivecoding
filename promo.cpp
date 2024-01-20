#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q,x,y,count=0;
    cin >> n >> q;
    vector<int> p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    
    sort(p.begin(),p.end());
    for(int i=0;i<q;i++)
    {
            int s=0;
        cin>>x>>y;
        for(int j=n-1;j>=n-x;j--)
        {
            count++;
            if(count>x-y)
            {
                s+=p[j];
                // cout<<s<<" ";
            }
        }
        cout<<s<<endl;
        
    }

}