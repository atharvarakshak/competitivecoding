#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
    int n;
	cin >> n;

    vector<int> a(n);


	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
    // case 1 => a[0] is fixed
    // case 2 => a[n-1] is fix
    // case 3 => assuming every elem at last
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]-a[0]);
        maxi=max(maxi,a[n-1]-a[i]);
        maxi = max(maxi,a[i]-a[(i+1)%n]);

    }
    cout<<maxi<<endl;
    

    }
}