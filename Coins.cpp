#include<bits/stdc++.h>
using namespace std;
int solve(){
long long n,k;

        cin>>n>>k;
        
           for(int i=0;i<2;i++){
                if(n - (i*k) >=0 && (n-(i*k) )%2==0)
                {
                    cout<<"YES"<<endl;
                   return 0;
                }
           }
        cout<<"NO"<<endl;
        return 0;
        
}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
}