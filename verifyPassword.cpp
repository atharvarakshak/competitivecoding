#include<bits/stdc++.h>
using namespace std;
// #define int long long
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            cout<<"YES\n";
        }
        else{
            bool ok = true;
            for (int i = 1; i < n; i++)
            {
                if(s[i]<s[i-1]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";

            }
            
        }
    }

}