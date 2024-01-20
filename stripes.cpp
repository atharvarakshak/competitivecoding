#include<bits/stdc++.h>
using namespace std;


void solve(){
    char a[8][8];
    vector<int> v;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='R'){v.push_back(i);}

        }
    }
    for(auto i:v)
    {
        bool c=true;
        for(int j=0;j<8;j++)
        {
            if(a[i][j]!='R')
            {
                c=false;
                break;
            }
        }
        if(c==true)
        {
            cout<<"R"<<endl;
            return;
        }
    }
    cout<<"B"<<endl;
    return;
}
int main()
{
    int t,r,r1,b1,b,i,j;
    char s[8][8];
    cin>>t;
    while(t--)
    {
        solve();
    }
}