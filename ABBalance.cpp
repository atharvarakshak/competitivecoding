#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        if(n==1){
            cout<<s<<endl;
        }
        else{
            int ab=0,ba=0;
            for (int i = 1; i < n; i++)
            {
                if(s[i-1]=='a' && s[i]=='b'){
                    ab++;
                }
                if(s[i-1]=='b' && s[i]=='a'){
                    ba++;
                }
            }
            if(ab==ba){
                cout<<s<<endl;
            }
            else{
                if(ab>ba){
                  for (int i = 1; i < n && ab!=ba; i++)
                    {  
                        if(s[i-1]=='a' && s[i]=='b'){
                            s[i-1]='b';
                            ab--;
                        }
                    }
               }
               else{
                     for (int i = 1; i < n && ab!=ba; i++)
                    {  
                        if(s[i-1]=='b' && s[i]=='a'){
                            s[i-1]='a';
                            ba--;
                        }
                    }
               }
               cout<<s<<endl;
            
           }
       }
    }

}