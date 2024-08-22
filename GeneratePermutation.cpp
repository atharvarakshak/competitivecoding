#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false), cin.tie(NULL);

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    if (n % 2 == 0) {
      cout << -1 << '\n';
    } else {
      vector<int> p(n);
      iota(p.begin(), p.end(), 1);
      for(int i = 1; i < n; i += 2)
        swap(p[i], p[i + 1]);
      for(int i = 0; i < n; i++)
        cout << p[i] << " \n"[i + 1 == n];
    }
  }
}