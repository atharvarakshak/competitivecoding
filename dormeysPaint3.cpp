#include <bits/stdc++.h>
using namespace std;

void solve()
{
   
}
int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {
         int count = 0,n;
    int x;
        // double x = INFINITY;
        cin >> n;
       
        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            map[x]++;
        }
        
            if(map.size() >= 3){
                cout<<"NO"<<endl;
            }
            else{
               
                   if(abs(map.begin()->second - map.rbegin()->second) <= 1){
                        cout<<"YES"<<endl;
                   }    
                   else{
                        cout<<"NO"<<endl;

                   }
            }
        
    }
    
}