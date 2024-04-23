#include <bits/stdc++.h>
using namespace std;
 
int dp[(int) 3e5+5];
const int MOD = 1e9 + 7;
 
int main() {
    cin.tie(0), cout.tie(0)->sync_with_stdio(0);
    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int used = 0;
        for (int i = 0; i < k; i++) {
            int r, c; cin >> r >> c;
            used += 2 - (r == c);
        }
        int m = n - used;
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= m; i++)
            dp[i] = (dp[i-1] + 2ll * (i-1) * dp[i-2] % MOD) % MOD;
        cout << dp[m] << "\n";    
    }
    
}