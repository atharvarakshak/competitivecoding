#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<char,int> mp;
        string key,s;
        cin>>key>>s;
        int n = s.length();
        int c=1;
        for (int  i = 0; i <key.length(); i++)
        {   
                mp[key[i]]=c;
                c++;
        }
        if(n==1){
            cout<<"0\n";
        }
        else{
            int sum=0;
            for (int  i = 1; i <n; i++)
            {
                sum+=abs(mp[s[i]]-mp[s[i-1]]);
            }
            cout<<sum<<endl;
        }

        


    }
}