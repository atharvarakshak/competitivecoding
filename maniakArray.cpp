#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
    int N;
	cin >> N;

    vector<int> a(N);
	int ans = -1000000007;

	for(int i = 0; i < N; ++i){
		cin >> a[i];
	}
    sort(a.begin(),a.end());
    cout<<a[N-1]-a[0]<<endl;

    }
}