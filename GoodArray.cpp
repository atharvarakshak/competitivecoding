#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int max1,max2;
   vector<int>temp;
   for(int i=0; i<n; i++){
    temp.push_back(a[i]);
   }
   sort(temp.begin(),temp.end());
   max1=temp[n-1];
   max2=temp[n-2];
    int sum=0;
    for(int i=0; i<n; i++)sum+=a[i];
    vector<int>ans;
    for(int i=0; i<n; i++){
        int k=sum-a[i];
        int ele;
        if(a[i]==max1){
            ele=max2;
        }
        else{
            ele=max1;
        }
        if(k-ele==ele){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
}