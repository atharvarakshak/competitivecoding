#include <bits/stdc++.h>
using namespace std;
int largestDivisor(int k){
    int a ;
    for(int i = k-1;i>=1;i--){
        if(k%i==0){
            a =  i;
        }
    }
    return a;
}
int main()
{
    long long  t;
    long long c,d;
    cin >> t;
    while (t--)
    {
        long long n,p=1;
        cin>>n;
        while(p*2<=n)p<<=1;
        cout<<p<<"\n";

    }
}