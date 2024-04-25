#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin >> t;

   while(t--){
        int n,x,a=0;
        cin>>n;
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            m[x]++;
        }
        for(auto i : m){
            if(i.second>=3){
                cout<<i.first<<endl;
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<"-1"<<endl;
        }

        
   }
}