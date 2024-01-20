#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b,int c){
    int d=abs(b-c);
    if(d & 1){ return 0;}
    return a>0 || min(b,c)>0;
}
int main(){
    int n,t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a==b && b==c){
            cout<<"1"<<" "<<"1"<<" "<<"1"<<endl;
        }
        else{
            cout<<solve(a,b,c)<<" "<<solve(b,a,c)<<" "<<solve(c,a,b)<<endl;
        }
    }
}