#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    int count=0,x=0,a[100];
	    cin>>n>>k;
	  
	    for(int i=0;i<n;i++)
	    {
	      cin>>a[i];  
	    }
	    for(int i=0;i<n-k+1;i++)
	    {
            x=a[i];
	        for(int j=i;j<i+k-1;j++)
	        {
	            x=(x|a[j+1]);
	            
	                
	        cout<<x<<endl;
	        }
	        if(x%2!=0)
	        {
	            
	            count++;
	        }
	        x=0;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
