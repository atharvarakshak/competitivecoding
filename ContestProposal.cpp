#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long> a,vector<long long> b){
    for(int i=0;i<a.size();i++){
        if(a[i]>b[i]) return false;
    }
 
    return true;
}
 
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
 
        vector<long long> a(n);
        vector<long long> b(n);
 
    for(int i=0;i<n;i++) {cin>>a[i];}
   for(int i=0;i<n;i++) {cin>>b[i];}
    
    long long count = 0;
    
    long long i = 0;
    while(true){
        if(check(a,b))
        {
             break;
        }
 
        count++;
        
        a.push_back(b[i]);
        sort(a.begin(),a.end());
        a.pop_back();
    }
 
    cout<<count<<endl;
 
    }
 
 
    
    return 0;
}