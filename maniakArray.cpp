#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n, k, x;
    cin >> t;
    while (t --)
    {
        int N;
	cin >> N;

	int A[N];
	int ans = -1000000007;

	for(int i = 0; i < N; ++i){
		cin >> A[i];
	}

	for(int i = 0; i < N; ++i){
		ans = max(ans, A[(i - 1 + N) % N] - A[i]);
	}

	for(int i = 0; i < N; ++i){
		ans = max(ans, A[i] - A[0]);
	}

	for(int i = 0; i < N - 1; ++i){
		ans = max(ans, A[N - 1] - A[i]);
	}

	cout << ans << '\n';
    }
}