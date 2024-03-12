#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;

	cin>>t;
	while(t--)
	{
        int n,s=0;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            s+=a[i];

        }
        if(s%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=1;i<n-1;i++){
                if(a[i-1]<=a[i+1] && a[i]>=2*a[i-1]){
                    a[i+1]-=a[i-1];
                    a[i]-=2*a[i-1];
                    a[i-1]=0;
                }
            }
            bool ok =true;
            for(int i=0;i<n;i++){
                if(a[i]!=0){
                    ok=false;
                    break;
                }
            }
            if(ok){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;

            }
        }

        
    }
}