#include <bits/stdc++.h>
 
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < i; ++j) {
        int x = max(a[n - 1], 2 * a[i]) - a[i] - a[j];
        int k = upper_bound(a.begin(), a.begin() + j, x) - a.begin();
        ans += j - k;
      }
    }
    cout << ans << '\n';
  }
}