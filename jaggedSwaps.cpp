#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // if(a[0]!=1){
        //     cout<<"NO"<<endl;
        // }
        // else {
        //     for(int i=1;i<n-1;i++ ){
        //         if(a[i]==i+1 || ((a[i+1]==i+1) && (a[i]>a[i+1]))){
        //             if( ((a[i+1]==i+1) && (a[i]>a[i+1])))
        //             {
        //                 swap(a[i],a[i+1]);
        //             }
        //             x=1;
        //         }
        //         else{
        //             x=0;
        //             cout<<"NO"<<endl;
        //             break;
        //         }
        //     }
        //     if(x==1){

        //          cout<<"YES"<<endl;
        //     }
           

        // }

        if(a[0]==*min_element(a.begin(),a.end()))
        {
            cout<<"yes"<<endl;
        }
        else{ cout<<"No"<<endl;}
    }
}