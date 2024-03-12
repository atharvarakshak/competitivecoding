#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;

	cin>>t;
	while(t--)
	{
        int n,m,k,c=0;
        cin>>n>>m>>k;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            for(int j=0;j<n;j++){
                if(a[j]+b[i]<=k){
                    c++;
                }
            }
        }
        cout<<c<<endl;
      
    }
}