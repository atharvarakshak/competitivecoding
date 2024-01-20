#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
 
    cin>>t;
    while(t--){
        int n,k,s=0;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        s=a[0];
        for(int i=1;i<n;i++){
            if(a[i]=b[i-1]){
                if(a[i]>b[i]){
                    
                }
            }
        }
    }
}