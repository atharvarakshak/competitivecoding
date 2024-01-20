#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    vector<int> a(n),b(m);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int p=0;
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	        p=max(p,b[i]);
	    }
	     vector<int> c;
	    for(int i=n-1;i>n-p-1;i--){
	        c.push_back(a[i]);
	    }
	    sort(c.begin(),c.end());
	    for(int i=0;i<=n-p-1;i++){
	        cout<<a[i];
	    }
	     for(int i=0;i<p;i++){
	        cout<<c[i];
	    }
	    
	}

}
