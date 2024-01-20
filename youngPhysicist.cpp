#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    long long n,s=0;
    cin>>n;
    vector<long long> a(n*3);
    for(int i=0;i<n*3;i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s==0 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }
}