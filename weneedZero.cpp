#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>x;
            ans^=x;
        }
        if(ans==0){
            cout<<"0"<<endl;
        }
        else{
            if(n%2!=0){
                cout<<ans<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
}