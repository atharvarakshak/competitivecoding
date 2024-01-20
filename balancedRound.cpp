#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,count=0;
    cin>>t;
    while (t>0)
    {
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         sort(a.begin(), a.end());
         
         int count = 0;
          if(n==1)
            {
                cout<<"0"<<endl;
            }
          else
            { 
                for (int i = 1; i < n; i++) 
                {
           
                    if (a[i] - a[i-1] > k)
                    {
                        count++;
                
                    }
                }
             }
    cout << n -count-1<<"\n";
    t--;
    }
    
}