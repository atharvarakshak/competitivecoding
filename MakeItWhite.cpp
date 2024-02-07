#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        int n,a,b;
        string s;
        cin >> n>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='B'){
                a=i;
                break;
            }
        }
        for(int i=s.length();i>=0;i--){
            if(s[i]=='B'){
                b=i;
                break;
            }
        }
        cout<<b-a+1<<endl;
    }
}