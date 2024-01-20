#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'  )
        {
            a=1;
        }
    }
        
        if(a==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    
}