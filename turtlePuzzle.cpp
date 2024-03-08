#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin >> t;

   while(t--){
    long long n,x,sum=0;
    cin>>n;
    // vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        sum+=abs(x);
    }
    cout<<sum<<endl;;
    
   }
}