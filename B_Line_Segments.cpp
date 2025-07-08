#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100010
double  a[N];
int solve()
{
        ll n, sx, sy, tx, ty;
  cin>>n;
//   vector<double> a(n+1);    
		cin>>sx>>sy>>tx>>ty;
		for(int i=1;i<=n;i++)
		 cin>>a[i];
		a[++n]=sqrt((sx-tx)*(sx-tx)+(sy-ty)*(sy-ty));
		sort(a+1,a+n+1);
		double sum=a[n];
		for(int i=1;i<n;i++)
		 sum-=a[i];
		if(sum<=0)
		 puts("Yes");
		else
		 puts("No");
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}