#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        int k,p=0,x,n=0,prod=1,sum=0;
        cin>>k;
        
        for(int i=0;i<k;i++){
            cin>>x;
            if(x==1){
                p++;
            }
            else if(x==-1){
                n++;

            }
       

        }
          if(p==k){
            cout<<"0"<<endl;
        }
        
        
        else if(p>=n){

            if(n%2 != 0){
                cout<<"1"<<endl;
            }
            else{
                cout<<"0"<<endl;

            }

        }
        else {
            int minus= n-k/2;
            // cout<<minus<<endl;
            if(k/2 % 2 != 0){
                minus++;
            }
            
            cout<<minus<<endl;
        }

    }
}