#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<double> p(m);
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());

    double best = INFINITY;
    if (m == n)
    {

        best = p.back() - p.front();
    }
    else
    {

        for (int i = 0; i < m - n+1; i++)
        {

            best = min(best, p[i + n - 1] - p[i]);
        }
        
     
    }
    cout << best;
}