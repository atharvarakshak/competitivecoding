#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=3){
            cout<<"ALICE\n";
            continue;
        }

        if(n%4==0){
            cout<<"BOB\n";
        }
        else{
            cout<<"ALICE\n";
        }







    }
}