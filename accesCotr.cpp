#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,k=0;
	    string s;
	    cin>>n>>x>>s;
	    for(int i=0;i<n;i++){
	        if(s[0]=='0'){
	            cout<<"NO"<<endl;
	            break;
	        }
	        if(s[i]=='1'){
	            i=i+x;
	            if( i>=n-1 )
	            {
	                cout<<"YES"<<endl;
	                break;
	            }
                
	        }
	        else{
	            cout<<"NO"<<endl;
	            break;
	            
	        }
	        
	    }
	    
	    
	    
	}

}