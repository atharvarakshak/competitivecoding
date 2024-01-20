#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int t,n,a,b;

    cin>>t;
    while(t>0)
    {
        cin>>n;
        vector<pair<int,int>> x;

        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            if(a<=10)
            {
                x.push_back({b,i});
            }
        }
        sort(x.begin(),x.end());
        cout<<x.back().second;
        cout<<endl;
        
        t--;
    }
}