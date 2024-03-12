#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,t,n;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
      
        if(a==1) cout<<"1"<<endl;
        else if(b<c){
            if(a<=b)cout<<"1"<<endl;
            else {
                if(a-1==(abs(b-c)+c-1 ))cout<<"3"<<endl;
                else if(a-1<(abs(b-c)+c-1))cout<<"1"<<endl;
                else cout<<"2"<<endl;

      
            }
        }
        else{
            if(a==b)cout<<"3"<<endl;
            else if(a<b)cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
    }
}