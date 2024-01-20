#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int t, n,k;
    vector<int> a;
    string s;
    cin>>t;
    while(t>0)
    {
        cin>>n>>k;
        cin>>s;
        int x=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='B')
            {
               x++ ;
               i+=k-1;
            }

        }
        cout<<x<<endl;
       
        //hii
        t--;
    }

}