#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        //n & n-1 has units in all except n
        if (n & (n - 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}