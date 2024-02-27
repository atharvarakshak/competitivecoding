#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
const int N = 3e5 + 10;
 
ll a[N],cnt[N],ans[N];
ll pre[N];
 
ll sum(int l,int r)
{
    return pre[r]-pre[l-1];
}
 
bool ok(int l,int r)
{
    if(l==r)
        return 1;
    return
        cnt[r]-cnt[l]>0;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            pre[i]=a[i]+pre[i-1];
            cnt[i]=(a[i]!=a[i-1])+cnt[i-1];
            ans[i]=INT_MAX;
        }
 
        for(int i=1;i<=n;i++)
        {
            if(i>1&&a[i-1]>a[i])
                ans[i]=1;
            if(i<n&&a[i+1]>a[i])
                ans[i]=1;
 
            int l=1,r=i-1;
            while(l<=r)
            {
                ll md=(l+r)>>1;
                if(sum(md,i-1)>a[i]&&ok(md,i-1))
                    ans[i]=min(ans[i],i-md),l=md+1;
                else
                    r=md-1;
            }
 
            l=i+1,r=n;
            while(l<=r)
            {
                ll md=(l+r)>>1;
                if(sum(i+1,md)>a[i] && ok(i+1,md))
                    ans[i]=min(ans[i],md-i),r=md-1;
                else
                    l=md+1;
            }
        }
 
        for(int i=1;i<=n;i++)
        {
            if(ans[i]==INT_MAX)
                cout<<"-1\n";
            else
                cout<<ans[i]<<"\n";
        }
        cout<<"\n";
    }
}