#include <bits/stdc++.h>
using namespace std;

void solve(int n) {

    if (n == 1) {
        cout << "NO\n";
        return;
    }
    

    string s = to_string(n);
    if (s.find_first_not_of("01") == string::npos) {    
        cout << "YES\n";
        return;
    }
    
    // Check if n has a factor other than 1 that is not a power of 2
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && __builtin_popcount(i) > 1 && __builtin_popcount(n / i) > 1) {
            cout << "YES\n";
            return;
        }
    }
    
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
