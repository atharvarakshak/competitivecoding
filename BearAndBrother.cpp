#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    if(a==b)
    {
        cout<<"1"<<endl;
    }
    else if(a>b)
    {
        cout<<"1"<<endl;
    }
    else
    {
        do
        {
            a*=3;
            b*=2;
            count++;

        }while(a<=b);

    cout<<count<<endl;
    }
    
}