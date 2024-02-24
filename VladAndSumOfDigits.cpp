#include<bits/stdc++.h>
using namespace std;
const int MAX = 200'007;
int res[MAX];

long long sum(int x){
    long long res =0;
    while(x){
                res+=(x%10);
                x=x/10;
            }
            return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    res[0] = 0;
	for (int i = 1; i < MAX; i++) {
		res[i] = res[i - 1] + sum(i);
	}
    int i,j,t;
  
    cin>>t;
    while(t--)
    {
        long long n,s=0,c=0,x=0;
        cin>>n;
        cout<<res[n];
    }
}