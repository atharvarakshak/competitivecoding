#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,count=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<endl;
        }
        else{

            cout<<(n/2)+1<<endl;
        }
        int p=1,q=3*n;
        while(p<q){
            cout<<p<<" "<<q<<endl;
            p+=3;
            q-=3;
        }
    }
}
