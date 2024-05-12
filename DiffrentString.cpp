#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s.length()==1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        for (int i = 1; i < s.length(); i++)
        {
            if(s[i]!=s[i-1]){
                swap(s[i-1],s[i]);
                
                cout<<"YES"<<endl;
                cout<<s<<endl;
                return;
            }
        }

        cout<<"NO"<<endl;
        return;
        
    }
        return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}