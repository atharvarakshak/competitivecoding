#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n>>k;
   
       
        long long p=1 ;
        while(pow(2,p)-1<=k){

            p++;
        }
        if(n==1){
            cout<<k<<endl;
        }
       
        else{
             if(n==2){
            cout<<int( pow(2,p-1) - 1)<<" ";
             cout<<int((k-(pow(2,p-1) - 1)));
           
            }
            else {

            // cout<<;
            cout<<int( pow(2,p-1) - 1)<<" ";
            cout<<int((k-(pow(2,p-1) - 1)))<<" ";
            for(int i=0;i<n-2;i++){
                cout<<"0 ";
            }
            }
            cout<<endl;
        }


        
        
    }
}