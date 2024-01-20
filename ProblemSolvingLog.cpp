#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,p=0;
        string s;
        cin>>n;
        cin>>s;
        unordered_map<char,int> count;
        for(char x:s)
        {
            count[x]++;
        }
        for(char c='A';c<='Z';c++)
        {
           if(count[c]>= c-'A'+1 ){
                p++;
           }
        }
        cout<<p<<endl;

    }
}