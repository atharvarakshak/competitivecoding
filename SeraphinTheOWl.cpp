#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> A(n);
    for (auto& item : A) {
        cin >> item;
    }
    reverse(A.begin(), A.end());

    vector<ll> B(n);
    for (auto& item : B) {
        cin >> item;
    }
    reverse(B.begin(), B.end());

    ll bSum = 0;
    ll pref = 0;
    for (ll i = 0; i < n - k; ++i) {
        if (A[i] < B[i]) {
            pref += bSum;
            pref += A[i];
            bSum = 0;
        } else {
            bSum += B[i];
        }
    }

    ll res = 1e18;
    for (ll i = n - k; i < n; ++i) {
        res = min(res, pref + bSum + A[i]);
        bSum += B[i];
    }

    cout << res << '\n';
}

int32_t main() {
    ll testN;
    cin >> testN;
    while (testN--) {
        solve();
    }
    return 0;
}