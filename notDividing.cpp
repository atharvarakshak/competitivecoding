#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i;
    char c[10];
  
    cin >> t;
    while(t--)
    {  
        int n,x,c=0;
        cin>>n;
        x=2*n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                v[i]++;
            }
        }
        
		for(int i = 1; i < n; i++){
			if(v[i] % v[i - 1] == 0){
				v[i]++;
			}
		}
        for(int i=0;i<n;i++){
            
                cout<<v[i]<<" ";
            
        }
            cout<<"\n";
    }
}