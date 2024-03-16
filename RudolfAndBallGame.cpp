#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--) {
        int n, m, a; cin >> n >> m >> a;
        set <int> q[2];
        int ix = 0;
        q[ix].insert(a);
        while (m--) {
            int x; char ch; cin >> x >> ch;
            while (!q[ix].empty()) {
                int u = *(q[ix].begin());
                q[ix].erase(u);
                if (ch == '?' || ch == '0') {
                    q[ix ^ 1].insert((u + x - 1) % n + 1);
                }
                if (ch == '?' || ch == '1') {
                    q[ix ^ 1].insert((u - x - 1 + n) % n + 1);
                }
            }
            ix ^= 1;
        }
        cout << q[ix].size() << '\n';
        for (auto& x : q[ix]) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}