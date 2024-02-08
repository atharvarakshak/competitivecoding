#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n,t;
      cin>>t;
     while(t--){
        int n,count=0,x;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if((a[i]+a[i-1])%2==0){
                count++;
            }
        }
        cout<<count<<endl;
     }
}