#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading integer input
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        vector<int> digits;
        for (char c : s) {
            digits.push_back(c - '0');
        }
        int zeroes = 0;
        for (int digit : digits) {
            if (digit == 0) {
                zeroes++;
            }
        }
        vector<int> cnt(2, 0);
        long long ans = 0;
        for (int digit : digits) {
            cnt[digit]++;
            if (digit == 0) {
                ans += (cnt[1] > 0) ? 1 : 0;
            } else {
                ans += (zeroes - cnt[0]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
