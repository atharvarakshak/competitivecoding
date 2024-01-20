#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin >> t;

   while(t--){
        int n,count=0;
        cin >> n;
        string a, b, c;
        cin>>a>>b>>c;
        for(int i=0;i<n;i++)
        {
            if( (a[i] == c[i]) ||( b[i] == c[i]))
            {
                count++;
            }
        }
        if(count==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            
        }

        
    
   }

    return 0;
}