#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    cin>>t;
    while (t --)
    {
        int s = 0,x;
        cin>>n;
        
       
        
        for (int i = 0; i < n-1 ; i++)
        {
            cin >> x;
            s+=x;
        }
        
      
        if (s > 0)
        {
            cout <<"-"<<s << endl;
        }
        else
        {
            cout << abs(s) << endl;
        }
       
    }
}