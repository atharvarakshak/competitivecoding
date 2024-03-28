#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n,maxi=INT_MIN;
        cin>>n;
        vector<int> a(n);
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
                cin>>a[i];
                m[a[i]]++;
                maxi = max(maxi,m[a[i]]);
        }
        if(maxi==n){
            cout<<"0"<<endl;
        }
        else{
            int c = 1;
            while(maxi<=n){
                if(2*maxi>=n){
                    c+=n-maxi;
                    break;
                }
                c+=maxi;
                maxi = 2*maxi;
                c++;
            }
            cout<<c<<endl;
        }
        
        
    }
}