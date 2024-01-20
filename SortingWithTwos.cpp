#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t, n;
   cin>>t;
   while(t--)
   {
    cin>>n;
    int flag=1,m=0;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int a0=a[0];
    for(int i=0;i<n;i++)
    {
        if(i>=pow(2,m))
        {
            a0=a[i];
            m++;
        }
        if(a0>a[i])
        {
            cout<<"NO"<<endl;
            flag=0;
            break;
        }
    a0=a[i];
    }
    	
		if(flag){
			cout<<"YES"<<endl;
        }
    
   }
}