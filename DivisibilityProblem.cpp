#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b;
        if(a%b==0){
            cout<<"0\n";
        }
        else if(a<b){
            cout<<b-a<<endl;
        }
        else{
            c = (a/b)+1;
            cout<<(c*b)-a<<endl;;
        }
     

    }
}