#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,a="";
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i]){
            a+='0';
        }
        else{
            a+='1';

        }
    }
    cout<<a<<endl;
}