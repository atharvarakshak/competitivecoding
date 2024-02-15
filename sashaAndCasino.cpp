#include <bits/stdc++.h>
using namespace std;
void solve(){
    
        long long  a,x,k,l=1;
        cin>>k>>x>>a;
        if(x>=a){
            cout<<"NO"<<endl;
            return;
        }
        vector<int> v(x+1,0);
        v[0]=1;
        a--;
        for(int i=1;i<=x;i++){
            int req = ceil(1.0*(l+1)/(k-1));
            v[i] = req;
            a-=req;
            if(a<0){
                cout<<"NO"<<endl;
                return;
            }
            l+=req;
        }
        cout<<"YES"<<endl;
        return;
}
int main()
{
    long long  t;
 
    cin >> t;
    while (t--)
    {
        solve();
    }
}