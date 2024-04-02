#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool ok = false;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='i' && s[i+1]=='t'){
                ok=true;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{

            cout<<"NO"<<endl;
        }
    }
}