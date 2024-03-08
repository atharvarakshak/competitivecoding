#include <bits/stdc++.h>
using namespace std;
void asquare()
{
    long long n;
    cin>>n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
   
    map<long long,long long>mp;
    long long mn=INT_MAX;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        mn=min(mn,v[i]);
    }
    if(mp[mn]==1){
        cout<<"YES"<<endl;
         return;
    }
    else{
        for(int i=0;i<n;i++){
            if((v[i]%mn)!=0){
                cout<<"YES"<<endl;
                 return;
            }
        }
        cout<<"NO"<<endl;
    }
    
}
//Main
int main()
{
   
    long long t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    return 0;
}