#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    long long c,d;
    cin >> t;
    while (t--)
    {
        long long  n,count=0,minus=0;
        long long mh=INT_MAX,ml=INT_MIN;
        cin >> n ;
        
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin>>c>>d;
            if(c == 1){
                ml=max(ml,d);
                
               
            }
            else if(c == 2)
              { 
                mh=min(mh,d);
              
           
            }
            else{
                v.push_back(d);
                
                 
                }
        }
        for(long long x: v){
            if(x>=ml && x<=mh){
                minus++;
            }
        }
        
    cout<<max(count,mh - ml - minus  + 1)<<"\n";
        
    }
}