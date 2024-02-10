#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,t,n;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>n>>a>>b;
        if(n==a && a==b){
            cout<<"YES"<<endl;
        }
        else if(a+b+2<=n){
            cout<<"YES"<<endl;
        }
        else{

            cout<<"NO"<<endl;
        }
    }
}