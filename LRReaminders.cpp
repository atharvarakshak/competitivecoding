#include <bits/stdc++.h>
#include <deque>
using namespace std;

long long product(deque<int> a){
    long long product =1;
    for(int i=0;a.size();i++){
        product *= a[i];
    }
    return product;
}
int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        int n,m,x;
        cin >> n >>m;
        vector<long long> a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        long long l=0,r=n-1;
        for(auto x:s){
            if(x=='L'){
                l++;
            }
            else{
                r--;
            }
        }
        assert(r+1==l);
        long long p=1,dir;
        vector<long long > ans(n);
        for(int i=n-1;i>=0;i--){
            dir = s[i];
            if(dir == 'L'){
                l--;
                p = (p*a[l])%m;
            }
            else{
                r++;
                p = (p*a[r])%m;
                
            }
            ans[i]=p;
        }
          for(auto x:ans)
           { cout<<x<<" ";}
        cout<<endl;

        
       

    }
}