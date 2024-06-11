#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long  t;

    cin >> t;
    while (t--)
    {
        ll x,y,z,k;
        cin>>x>>y>>z>>k;

        ll v = x*y*z;
        ll a,b,c;
        if(k%2!=0){
            a=1;
            b=1;
            c=k;

        }
        else{
            a=2;
            if(k%3==0){
                b=3;

            }
            else{
                b=2;
            }
            if(k-(a*b) % 3==0){
                c=3;
            }
            else{
                c=2;
            }
        }





        
    }
}