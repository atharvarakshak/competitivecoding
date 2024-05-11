#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t --)
    {
        int n, k, x,maxi=INT_MIN,maxe=INT_MIN,s;
        cin>>x;
        for(int i=1;i<x;i++){
           maxi = max(maxi,__gcd(x,i));
        }
        for(int i=1;i<x;i++){
           if(i==maxi){
            s = i;
           }
        }
        int maxi2 = x-1;
        if(maxi+s>maxi2+1){
            cout<<maxe<<endl;
        }
        else{
            cout<<maxi2<<endl;
        }

    }
}