#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n,k;
    cin >> t;
    while (t--)
    {
        cin >> n>>k;
        long long s = 0,d=0;
        vector<int> a(n),x(n),possible(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        for(int i=0;i<n;i++){
            cin>>x[i];
           possible[abs(x[i])]+=a[i];
        }
        int bullets=k;
        bool b = 1;
        for(int i=1;i<=n;i++){
            if(bullets<possible[i]){
                b=0;
                break;
            }
            bullets-=possible[i];
            bullets+=k;
        }
  
        if( b==1){
            cout<<"YES"<<endl;
        }
        else{

            cout<<"NO"<<endl;
        }

    }
}