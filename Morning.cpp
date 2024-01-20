#include <bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int t, count = 0,p,a[100];
    string s;
    cin >> t;
    while (t--)
    {
        cin>>s;
        int n= stoi(s);
        a[3]=n%10;
        if(a[3]==0)
        {
            a[3]=10;
        }
        n=n/10;
        a[2]=n%10;
        if(a[2]==0)
        {
            a[2]=10;
        }
        n=n/10;
        a[1]=n%10;
        if(a[1]==0)
        {
            a[1]=10;
        }
        n=n/10;
        a[0]=n%10;
        if(a[0]==0)
        {
            a[0]=10;
        }
        // cout<<a[1];
        cout<<(a[0]+(abs(a[1]-a[0])+1)+(abs(a[2]-a[1])+1)+(abs(a[3]-a[2])+1))<<endl;
    }
}