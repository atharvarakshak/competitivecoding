#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    long int t,n;
    cin >> t;
    while (t--)
    {
        int c=0;
        cin>>n>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='+'){
                c++;
            }
            else{
                c--;
            }
        }
        cout<<abs(c)<<endl;
    }
}