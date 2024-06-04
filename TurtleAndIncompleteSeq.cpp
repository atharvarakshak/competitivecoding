#include <bits/stdc++.h>
#define pb emplace_back
#define fst first
#define scd second
#define mkp make_pair
#define mems(a, x) memset((a), (x), sizeof(a))

using namespace std;
typedef long long ll;
typedef double db;
typedef unsigned long long ull;
typedef long double ldb;
typedef pair<ll, ll> pii;

const int maxn = 200100;

int n, a[maxn];

inline vector<int> path(int x, int y) {
	vector<int> L, R;
	while (__lg(x) > __lg(y)) {
		L.pb(x);
		x >>= 1;
	}
	while (__lg(y) > __lg(x)) {
		R.pb(y);
		y >>= 1;
	}
	while (x != y) {
		L.pb(x);
		R.pb(y);
		x >>= 1;
		y >>= 1;
	}
	L.pb(x);
	reverse(R.begin(), R.end());
	for (int x : R) {
		L.pb(x);
	}
	return L;
}

void solve() {
	scanf("%d", &n);
	int l = -1, r = -1;
	vector<int> vc;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		if (a[i] != -1) {
			if (l == -1) {
				l = i;
			}
			r = i;
			vc.pb(i);
		}
	}
	if (l == -1) {
		for (int i = 1; i <= n; ++i) {
			printf("%d%c", (i & 1) + 1, " \n"[i == n]);
		}
		return;
	}
	for (int i = l - 1; i; --i) {
		a[i] = (((l - i) & 1) ? a[l] * 2 : a[l]);
	}
	for (int i = r + 1; i <= n; ++i) {
		a[i] = (((i - r) & 1) ? a[r] * 2 : a[r]);
	}
	for (int _ = 1; _ < (int)vc.size(); ++_) {
		int l = vc[_ - 1], r = vc[_];
		vector<int> p = path(a[l], a[r]);
		if (((int)p.size() & 1) != ((r - l + 1) & 1) || r - l + 1 < (int)p.size()) {
			puts("-1");
			return;
		}
		for (int i = 0; i < (int)p.size(); ++i) {
			a[l + i] = p[i];
		}
		for (int i = l + (int)p.size(), o = 1; i <= r; ++i, o ^= 1) {
			a[i] = (o ? a[i - 1] * 2 : a[i - 1] / 2);
		}
	}
	for (int i = 1; i <= n; ++i) {
		printf("%d%c", a[i], " \n"[i == n]);
	}
}

int main() {
	int T = 1;
	scanf("%d", &T);
	while (T--) {
		solve();
	}
	return 0;
}