#include <bits/stdc++.h>
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, count = 0;
    long long m=INT_MAX,x;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        m=min(m,abs(x));
        
    }
   
     cout<<abs(m);
   
}