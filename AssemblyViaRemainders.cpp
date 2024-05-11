#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t --)
    {
    //    int n;
    //    cin>>n;
    //    vector<int> x(n),a(n+1);
    //    for (int i = 0; i < n-1; i++)
    //    {
    //     cin>>x[i];
    //    }
    //    a[0]=(x[0]+1);
       
    //    for (int i = 1; i < n; i++)
    //    {
    //         if(((a[i-1]+x[i-1])/a[i-1] )<=1){

    //             a[i] = a[i-1]+x[i-1];
    //         }
    //         else{
                
    //             a[i-1]=x[i-1]+a[i-2];
    //             a[i]=x[i-1];
    //         }
    //    }
    //    for (int i = 0; i < n; i++)
    //    {
    //         cout<<a[i]<<" ";
    //    }
    //    cout<<endl;

        int n;
		cin>>n;
		int S=1000;
		cout<<S<<" ";
		for(int i=2;i<=n;i++){
			int x;
			cin>>x;
			S+=x;
			cout<<S<<" ";
		}
		cout<<"\n";
       
    }
}