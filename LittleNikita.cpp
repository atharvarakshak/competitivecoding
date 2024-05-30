#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==m){
            cout<<"Yes\n";
        }
        else if(n<m){
            cout<<"No\n";

        }
        else{
            if((n%2==0 && m%2==0) || (n%2!=0 && m%2!=0) ){
                cout<<"Yes\n";

            }
            else{

                cout<<"No\n";
            }
        }
    }
}