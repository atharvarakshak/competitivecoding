#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,d;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c>>d;
        if(a*d==b*c || (a==0 && c==0))
        {
            cout<<"0\n";
        }
        else if(a==0 || c==0)
        {
            cout<<"1\n";
        }
        else if((a*d)!=0 && (b*c)%(a*d)==0 || (b*c)!=0 && (a*d)%(b*c)==0){
            cout<<"1\n";
        }
        else{
            cout<<"2\n";
        }
    }
}