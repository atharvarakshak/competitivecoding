#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n),b(n);
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        for(int i=0;i<n;i++){
           v.push_back(make_pair(a[i],b[i]));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i].first<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;
    }
}