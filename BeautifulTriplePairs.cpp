#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
                cin>>a[i];
        }
       
        
    long long ans = 0;
 
    for(int i = 0; i < 3; i++){
        map<pair<int,int>, vector<int>> m;
 
        for(int j = 0; j < n - 2; j++){
            if(i == 0){
                m[{a[j + 1], a[j + 2]}].push_back(a[j]);
            }else if(i == 1){
                m[{a[j], a[j + 2]}].push_back(a[j + 1]);
            }else{
                m[{a[j], a[j + 1]}].push_back(a[j + 2]);
            }
        }
 
        for(auto x: m){
            sort(x.second.begin(), x.second.end());
            vector<long long> tmp;
            int count = 1;
            for(int k = 1; k < (int)x.second.size(); k++){
                if(x.second[k] == x.second[k - 1])count++;
                else{
                    tmp.push_back(count);
                    count = 1;
                }
            }
            tmp.push_back(count);
            if(tmp.size() < 2)continue;
 
            long long sum = accumulate(tmp.begin(), tmp.end(), 0LL);
            sum = sum * (sum - 1) / 2;
            ans += sum;
            for(auto x: tmp){
                ans -= (x * (x - 1) / 2);
            }
 
        }
        m.clear();
    }
    cout << ans << "\n";
    }
        
    
}