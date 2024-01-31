#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,t,n;
    cin>>t;
    while (t--)
    {
        long long n,k;
        cin>>n>>k;
   
        for(int i=0;i<n;i++){
            for(char c='a';c<'a'+k;c++){
                cout<<c;
            }
        }
        cout<<endl;


    }
}