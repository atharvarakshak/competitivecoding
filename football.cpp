#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0,a=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            // cout<<i;
            
                if(count>=6)
                {
                    a=1;
                    break;
                }
            
        }
        else{
            count=0;
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