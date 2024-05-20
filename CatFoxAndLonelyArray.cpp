#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
         long long n;
         cin>>n;
         vector<int> a(n);
         for (int i = 0; i < n; i++)
         {
            cin>>a[i];
         }
         
        long long maxi = *max_element(a.begin(),a.end());

        long long x = 0,c=0,ans=INT_MIN;
        for (int i = 0; i < n; i++)
         {
            x = x|a[i];
            if(x==maxi){
                ans = c;
                x=0;
                c=0;
            }
            else{
                c++;
            }
         }

        cout<<max(ans,c)<<endl;
         
         


    }
}