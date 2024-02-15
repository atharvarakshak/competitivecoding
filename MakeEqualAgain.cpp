#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        int n,sum=0;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=1,p=1,b=0;
        for(int i=1;i<n;i++){
            if(a[0]==a[i]){
                c++;
            }
            else{
                break;
            }
        }


        for(int i=n-2;i>=0;i--){
            if(a[n-1]==a[i]){
                p++;
            }
            else{
                break;
            }
        }
        if(n==1){
            cout<<"0"<<endl;
        }
        else if(a[n-1]==a[0]){
            cout<<max(b,n-c-p)<<endl;
        }
        else{
            cout<<n - max(p,c)<<endl;

        }
    }
}