#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	string a,b;
	cin>>t;
	while(t--)
	{
	    int c=0,d=0;
	    cin>>n;
	    cin>>a>>b;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==b[i])
	        {
	            continue;
	        }
	        
	         else if(a[i]=='r' && b[i]=='s')
	         {
	             c++;
	         }
	          else if(b[i]=='r' && a[i]=='s')
	         {
	             d++;
	         }
	          else if(a[i]=='r' && b[i]=='p')
	         {
	             d++;
	         }
	          else if(b[i]=='r' && a[i]=='p')
	         {
	             c++;
	         }
	         
	         
	    }
	    if(d==c)
        {
            cout<<"1"<<endl;
        }
        else if(c<d)
        {
            cout<<(d-c)<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
	}
	return 0;
}
