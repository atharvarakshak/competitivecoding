#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p=0,x;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==k){
                p=1;
            }
        }
       
        if(p==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}