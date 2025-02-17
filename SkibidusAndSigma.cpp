#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> totals(n), total_F(n);
    
    for (int i = 0; i < n; i++) {
        vector<int> arr(m);
        for (int j = 0; j < m; j++) {
            cin >> arr[j];
        }

        int sumA = accumulate(arr.begin(), arr.end(), 0LL);
        int sumF = 0, prefixSum = 0;

        for (int j = 0; j < m; j++) {
            prefixSum += arr[j];
            sumF += prefixSum;
        }

        totals[i] = sumA;
        total_F[i] = sumF;
    }

    sort(totals.rbegin(), totals.rend());

    int result = accumulate(total_F.begin(), total_F.end(), 0LL);
    for (int i = 0; i < n; i++) {
        result += m * (n - 1 - i) * totals[i];
    }

    cout << result << "\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
