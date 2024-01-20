#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
int main()
{
    int x,t,n,j,i;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        rep(i,n){ cin>>a[i];}   //for loop
        sort(a.begin(),a.end());
        if(a[0]==a[n-1])
        {
            cout<<"-1\n";
            
        }
        else
        {
            vector<int> b,c;
            rep(i,n)
            {
                if(a[i]==a[0])
                {
                    b.push_back(a[i]);
                }
                else
                {
                    c.push_back(a[i]);
                }
            }
             cout << b.size() << ' ' << c.size() << '\n';
             for(auto x:b)
             {
                cout<<x<<endl;
             }
             for(auto x:c)
             {
                cout<<x<<endl;
             }

        }
        
        
            
        
        t--;
    }
    

}