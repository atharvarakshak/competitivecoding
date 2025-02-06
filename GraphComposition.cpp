#include <bits/stdc++.h>
using namespace std;

class DSU {
public:
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unite(int x, int y) {
        int px = find(x);
        int py = find(y);
        if (px != py) {
            if (rank[px] > rank[py])
                parent[py] = px;
            else if (rank[px] < rank[py])
                parent[px] = py;
            else {
                parent[py] = px;
                rank[px]++;
            }
        }
    }
};

void solve() {
    int n, m1, m2;
    cin >> n >> m1 >> m2;

    DSU dsuF(n + 1), dsuG(n + 1);

    // Read edges for F
    for (int i = 0; i < m1; i++) {
        int u, v;
        cin >> u >> v;
        dsuF.unite(u, v);
    }

    // Read edges for G
    for (int i = 0; i < m2; i++) {
        int u, v;
        cin >> u >> v;
        dsuG.unite(u, v);
    }

    vector<pair<int, int>> operations;

    // Iterate over all pairs of nodes
    for (int u = 1; u <= n; ++u) {
        for (int v = u + 1; v <= n; ++v) {
            // Check if `u` and `v` belong to different components in both graphs
            if (dsuF.find(u) != dsuF.find(v) && dsuG.find(u) != dsuG.find(v)) {
                operations.emplace_back(u, v);
                dsuF.unite(u, v);  // Connect in F
                dsuG.unite(u, v);  // Connect in G
            }
        }
    }

    // Output the result
    cout << operations.size() << "\n";
    for (const auto& op : operations) {
        cout << op.first << " " << op.second << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
