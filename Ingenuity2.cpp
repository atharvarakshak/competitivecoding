#include<bits/stdc++.h>
using namespace std;
void solve(){
    
    int n; string t;
    cin >> n >> t;
    int x = 0, y = 0;
    for(auto i: t){
        if(i == 'N') y++;
        else if(i == 'S') y--;
        else if(i == 'W') x--;
        else x++;
    }
    if(abs(x) % 2 == 1 || abs(y) % 2 == 1) cout << "NO\n";
    else if(n == 2 && x == 0 && y == 0) cout << "NO\n";
    else{
        int n = 0, s = 0, w = 1, e = 1;
        char m[2] = {'R', 'H'};
        string ans = "";
        for(auto c: t){
            if(c == 'N') ans += m[n], n = 1 - n;
            else if(c == 'S') ans += m[s], s = 1 - s;
            else if(c == 'W') ans += m[w], w = 1 - w;
            else ans += m[e], e = 1 - e;
        }
        cout << ans << '\n';
}
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
