#include <bits/stdc++.h>

using namespace std;


 void solve(int n) {
	for (int x = 1; x <= 20; x++) {
	    for (int y = 1; y <= 20; y++) {
	        if (x + y >= n || x == y) continue;
	        int z = n - x - y;
	        if (z == x || z == y) continue;
	        if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) {
	            continue;
	        }
	        cout<<"YES"<<endl;
	        cout << x << ' ' << y << ' ' << z << endl;
	        return;
	    }
	}
	    cout<<"NO"<<endl;
}

int main () {
    int t,n;
    cin >> t;
    while (t--){
        cin>>n;
        solve(n);
    }
}