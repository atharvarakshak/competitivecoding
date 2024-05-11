#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
            cin>>a[i];
    }
    if(n==1){
        cout<<"0\n";
    }
    else if(n==2){
        if(a[1]!=a[0]){
            cout<<"1\n";
        }
        else{

            cout<<"0\n";
        }
    }
    else{

    for (int i = 1; i < n; i++)
    {
        if(a[i]>a[i-1]){
            c++;
        }

    }
    cout<<c;
    }

    
}