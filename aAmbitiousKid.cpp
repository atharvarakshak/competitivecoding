#include <bits/stdc++.h>
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n = 1)
    {
        if (a[0] = 0)
        {
            cout << count;
        }
        else if (a[0] > 0)
        {
            cout << a[0];
        }
        else
        {
            cout << -a[0];
        }
    }

   else if(n>1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cout << count;
                break;
            }
            a[i]*=a[i];
        }
        // cout<<a<<endl;
        
        sort(a.begin(),a.end());
       cout << sqrt(a[0])<<endl;
    }
}