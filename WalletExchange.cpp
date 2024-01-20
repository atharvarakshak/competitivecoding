#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int t,k=0;
    long long a,b;

    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a==b){
            cout<<"Bob"<<endl;
        }
        if(a-b>0 && (a-b)%2==0){
            cout<<"Bob"<<endl;
        }
        else if(a-b<0 && (abs(a-b)%2 != 0)){
             cout<<"Alice"<<endl;
        }
        else if(a-b<0 && (a-b)%2==0){
            cout<<"Bob"<<endl;
        }
        else if(a-b>0 && (abs(a-b)%2 != 0)){

            cout<<"Alice"<<endl;
        }

        
    }
}