#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}
int main()
{
    int t, n, k;
    string s;
    cin >> t;
    while (t--)
    {
        int n,l;
        cin>>n>>l;
        vector<pair<ll,ll>>v(n);
        for(int i=0;i<n;i++){
            long long a,b;
            cin>>a>>b;
            // v[i]={a,b};
            v[i].first=a;
            v[i].second=b;
        }
        sort(v.begin(),v.end(),sorta);
        int ans=0;
        for (int i = 0; i < n; i++)
        {
                priority_queue<int> pq;
                int sum=0;
                for(int j = i; j < n; j++){
                     pq.push(v[j].first);
                    sum += v[j].first;
                    while(!pq.empty() && sum + v[j].second - v[i].second > l){
                        sum -= pq.top();
                        pq.pop();
                    }
                    ans = max(ans, (int)pq.size());
                }
        }
        cout<<ans<<endl;
    }
}