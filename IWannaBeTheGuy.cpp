#include<bits/stdc++.h>
using namespace std;
int main(){
   
        int n,x,p,q;
        cin>>n>>p;
        set<int> a,b;
        for(int i=0;i<p;i++ ){
            cin>>x;
            a.insert(x);
        }
        cin>>q;
        for(int i=0;i<q;i++ ){
            cin>>x;
            a.insert(x);
        }
        if(a.size()==n ){
            cout<<"I become the guy."<<endl;
        }
        else{
            cout<<"Oh, my keyboard!"<<endl;
        }

    
}