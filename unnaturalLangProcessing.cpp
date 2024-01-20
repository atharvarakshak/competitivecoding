#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,t,n;
    cin>>t;
    while (t--)
    {
        int n,p=0;
        string s;
        cin>>n;
        cin>>s;
        vector<char> c;
        for(int i=s.length()-1;i>=0;i--){
            if((s[i] == 'a' || s[i] == 'e') && i==1){
                c.push_back(s[i]);
                c.push_back(s[i-1]);
                
                break;
            }
            
            else if((s[i] == 'a' || s[i] == 'e') ){
                c.push_back(s[i]);
                c.push_back(s[i-1]);
                c.push_back('.');
                p++;
                
                i=i-1;
            }
            else if((s[i] == 'b' || s[i] == 'c' || s[i] == 'd' ) && i==2){
                c.push_back(s[i]);
                c.push_back(s[i-1]);
                c.push_back(s[i-2]);
                break;
            }
            else {
                c.push_back(s[i]);
                c.push_back(s[i-1]);
                c.push_back(s[i-2]);
                c.push_back('.');
                p++;
                i=i-2;

            }
        }
        reverse(c.begin(),c.end());
        for(int i=0;i<s.length()+p;i++){
             cout<<c[i];
        }
        cout<<endl;
    }
}