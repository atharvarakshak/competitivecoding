#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t, n;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    if(n%2==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        char ch='A';
        for(int i=0;i<n/2;i++){
            cout<<ch<<ch;
            ch++;

        }
        cout<<endl;
    }
   }
}