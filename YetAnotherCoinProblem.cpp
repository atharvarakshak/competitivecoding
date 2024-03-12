#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcases;
    cin >> testcases;
    for (int t = 1; t <= testcases; t++)
    {
        int n;
        cin >> n;
        int ans = 1e9;
        for(int ones = 0; ones <= 2; ones++){
            for(int threes = 0; threes <= 1; threes++){
                for(int sixes = 0; sixes <= 4; sixes++){
                    for(int tens = 0; tens <= 2; tens++){
                        int brute_sum = 1*ones + 3*threes + 6*sixes + 10*tens;
                        if(brute_sum <= n && (n-brute_sum)%15 == 0){
                            ans = min(ans, ones + threes + sixes + tens + (n-brute_sum)/15);
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
