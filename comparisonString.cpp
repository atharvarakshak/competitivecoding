#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int a=1,b=1,n;
        cin>>n>>s;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                b=1;
            }
            else{
                b++;
            }
            a=max(a,b);
        }
        cout<<a+1<<endl;
      
    }
}