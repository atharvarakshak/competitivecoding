#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
         int n, m, k;
        cin >> n >> m >> k;

        int max_color = (n + m - 1) / m;
        if (max_color + k >= n) {
            cout << "NO" <<endl;
        } else {
            cout << "YES" <<endl;
        }
    }
}