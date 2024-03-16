#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k==0){
            cout<<n<<endl;
        }
        else if(k<n-1){
            cout<<n<<endl;

        }
        else {
            // int c=0,i=1,p=n;
            // while(k!=0){
            //     if(k>=n-i){
            //        c++;
            //        k-=(n-i);
            //        i++;
                   
            //     }
            //     else {
            //         break;
            //     }
               
            // }
            cout<<"1"<<endl;
        }
    }
}