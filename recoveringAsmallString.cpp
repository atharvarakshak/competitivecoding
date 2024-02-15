#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
 
    cin>>t;
	while(t--)
	{
        int n,p;
        cin>>n;
        // vector<char> c(n+1);
        // char ch='a';
        // for(int i=1;i<=26;i++){
        //     c[i]=ch++;
        // }
        string s="";
        if(n<=27){
            // p=n-2;
            n = n-3;
            s+=('a'+n);
            cout<<"aa"<<s<<endl;;
        }
        else if(n>=28 && n<=53){
            n-=28;
            s+=('a'+n);
            // n= n-26;
            p= n-1;
            cout<<"a"<<s<<"z"<<endl;

        }
        else{
            p=n-1;
            n-=53;
            s += ('a'+n);
            cout<<s<<"zz"<<endl;
        }   
    }
}