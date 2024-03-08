#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
     while(t--){
        long long n,l;
        cin>>n;
        string s;
        cin>>s;
        string p=s;
        reverse(p.begin(),p.end());
         l =s.length();
        if(p>=s){
            cout<<s<<endl;
        }
        else {
            p+=s;
            cout<<p<<endl;
        }
     }
}