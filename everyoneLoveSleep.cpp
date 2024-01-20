#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,h,m,a=1440,time ,t;
    // long long best=INFINITY;
    cin>>n>>h>>m;
    time=h*60+m;  //min
        
        for(int i=0;i<n;i++)
        {
            cin>>h>>m;
            t=h*60+m-time;
            if(t<0)
            {
                t+=24*60;
            }
            a=min(a,t);


        }
        cout<<a/60<<" "<<a%60<<endl;
        

}
int main()
{
    int n,h,m;
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}