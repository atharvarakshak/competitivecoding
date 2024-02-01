#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,m,k,x,y;
  
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d || c-a>d-b){
            cout<<"-1"<<endl;
        }
        else{
            cout<<abs((d-b)+(d-b+a-c))<<endl;
        }
    }
}