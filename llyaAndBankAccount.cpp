#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
	cin >> n;
	int M = n;
	if (n/10 > M) M = n/10;
	if (n%10 + (n/100)*10 > M) M = n%10 + (n/100)*10;
	cout << M;
    }


