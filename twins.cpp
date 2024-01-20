#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, tot = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(),greater<int>());
    for (int i = 0; i < n; i++)
    {
        tot += a[i];
    }
    // cout<<tot;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        // cout<<sum<<endl;
        if (sum > tot - sum)
        {
            break;
        }
        count++;
        // cout<<count<<endl;
        
    }
    cout << count+1 << endl;
}