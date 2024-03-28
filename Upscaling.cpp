#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
     
        bool ok =true;
        for(int i=0;i<2*n;i++){
          
            for(int j=0;j<2*n;j+=2){
                if(ok){

                if((i+j)%4==0 ){
                    cout<<"##";
                }
                else{
                    cout<<"..";
                    
                }
                }
                else{
                   if((i+j)%4==1 ){
                    cout<<"##";
                }
                else{
                    cout<<"..";
                    
                }
                }
                
            }
          

            ok = !ok;
            
            cout<<endl;
        }

    }
}