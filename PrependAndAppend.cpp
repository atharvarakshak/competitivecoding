#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int l = 0 ,r=n-1,count=0;
        while(l<=r){
            if((s[l]=='0' && s[r]=='1') || (s[l]=='1' && s[r]=='0') ){
                count+=2;
                l++;
                r--;
            }
            else{
                break;
            }
            
        }
        cout<<n-count<<endl;
    }
}