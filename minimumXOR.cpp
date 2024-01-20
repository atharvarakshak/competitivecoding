#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int s = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s = s ^ a[i];
        }
        sort(a.begin(),a.end());
        if (s == 0)
        {
            cout << "0\n";
        }
        else
        {
            for (int i = n-1; i >= 0; i--)
            {
            
                if (a[i] % 2 != 0)
                {
                    a[i] = 0;
                    break;
                }
            }
         
            int x = 0;
            for (int i = 0; i < n; i++)
            {
                x = x ^ a[i];
            }
            cout << x << endl;
        }
    }
}