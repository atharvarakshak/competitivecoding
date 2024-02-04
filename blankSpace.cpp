#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin>>t;
    while(t--)
    {
        int n,x,ans=0,count=0;
        cin>>n;
        // vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==0){
                count++;
                ans=max(ans,count);
            }
            else{
                count=0;
            }
        }
        cout<<ans<<endl;
    }
}