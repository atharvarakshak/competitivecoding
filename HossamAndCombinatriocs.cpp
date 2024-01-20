#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long n;
    long int k;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (a[0] == a[n - 1])
        {
            cout << (1LL*n * (n - 1LL)) << endl;
            continue;
        }
      
            long long min = 0, max = n - 1;

            while (a[0] == a[min])
                ++min;

            while (a[n - 1] == a[max])
                --max;

            long long l = min;
            long long r = n - max - 1;
            cout << 2LL * l * r << endl;
        
    }
}