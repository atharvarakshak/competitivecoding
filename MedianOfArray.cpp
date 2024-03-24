#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long t, n, k;
 
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector<long long> a(n+1),b(n);
   

        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            
        }
        
        sort(a.begin()+1,a.begin()+1+n);
        int c=0;
        for (int i = (n+1)/2; i <= n; i++)
        {
            if(a[i]==a[(n+1)/2]){
                c++;
            }
            else{
                break;
            }
        }
        
        cout<<c<<endl;



        
    }
}