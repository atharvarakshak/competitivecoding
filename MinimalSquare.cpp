#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<a*b*4<<endl;
        }
        else{
            cout<<min(max(a * 2, b), max(a, b * 2))*min(max(a * 2, b), max(a, b * 2))<<endl;
        }
        
    }
}