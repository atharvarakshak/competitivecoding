#include <bits/stdc++.h>

using namespace std;
long long  powermod(long long x, long long y, long long p){long long res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

long long maxArraySum( vector<long long> a,       int n)
{
    int maxi  = INT_MIN ;
    long long  maxend = 0;
 
    for (int i = 0; i < n; i++) {




        maxend = maxend + a[i];


        if (maxi < maxend)



            maxi  = maxend;
 
        if (maxend<0)
            maxend=0;
    }
    return maxi;
}
int main()
{
    long long t, n, k,mod=1e9+7;
 
    cin >> t;
    while (t--)
    {
     long long n,k,ans=0,sum=0,m=0;
    cin>>n>>k;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		m+=v[i];
		sum+=v[i];
		if(sum<0){
			sum=0;
		}
		ans=max(ans,sum);
	}
	m=((m-ans)%mod+mod)%mod;
	ans%=mod;
	cout<<(m%mod+((powermod(2,k,mod)%mod*ans%mod)%mod)%mod)%mod<<endl;
   
    }
}