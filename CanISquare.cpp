#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,s=0,x;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for(long long i=0;i<n;i++){
            cin>>x;
            s+=x;
        }
     
        long long num = int( sqrt(s));
        
        if(num==sqrt(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
        s=0;
    }
}