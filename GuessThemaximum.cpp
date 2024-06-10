#include <bits/stdc++.h>
using namespace std;
#define ll long long
   

int getSubsegments(vector<ll>& vec) {
   vector<ll> subsegments;
    ll c=INT_MIN;
    // Iterate over all possible starting points
    for (ll start = 0; start < vec.size(); ++start) {
        // Iterate over all possible ending points
        for (ll end = start; end < vec.size(); ++end) {
            vector<int> subsegment(vec.begin() + start, vec.begin() + end + 1);
          c=min(c, *max_element(subsegments.begin(),subsegments.end()));
        }
    }

    return c;
}
int main()
{
    int t;
   int n;
    
    cin >> t;
    
    while (t--)
    {
        ll n,c;
        cin>>n;
        vector<ll> a(n),p;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

    for(int i=1;i<n;i++){
        p.push_back(max(a[i],a[i-1]));
    }
    c=p[0];
    c =min(c, *min_element(p.begin(),p.end()));
    c--;
    cout<<c<<endl;

        
    }
}