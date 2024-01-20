#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int t,a,b,c;
    cin>>t;
    
    while(t>0)
    {
        cin>>a>>b>>c;
        if(a+b>=10 || b+c>=10 || a+c>=10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        t--;

    }
}