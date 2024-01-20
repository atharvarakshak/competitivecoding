#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> a;
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x -= i;
            res += a[x];
            a[x]++;
        }
        cout << res << endl;
    }
}