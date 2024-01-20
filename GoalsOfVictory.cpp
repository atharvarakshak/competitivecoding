#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    cin>>t;
    while (t > 0)
    {
        int s = 0,a[100];
        cin >> n;
        // vector<int> a(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            s = s + a[i];
            // cout<<s;
        }
        // cout<<s<<endl;
        if (n % 2 == 0)
        {
            cout << -s << endl;
        }
        else
        {
            cout << abs(s) << endl;
        }
        t--;
    }
}