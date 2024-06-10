#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,t;
    cin>>t;
    while(t--){
        string  x;
        cin>>x;
        // long long s;
        int b = 1;
        if('1' != x[0]){
            cout<<"NO\n";
        }
        else{
            for (int i = 1; i < x.length(); i++)
            {
                if(i==x.size()-1){
                    if(x[i]>=57){
                        b=0;
                        break;
                    }
                }
                else{
                    if(x[i]==48){
                        b=0;
                        break;
                    }
                }
            }
            
        if(b==1){
            cout<<"YES\n";
        }
        else{

            cout<<"NO\n";
        }
        }


    }

}