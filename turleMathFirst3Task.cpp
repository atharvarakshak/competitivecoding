#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    
    cin >> t;

   while(t--){
        long long n,s=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%3==0){
            cout<<"0"<<endl;
        }
        else if(s%3==2){
            cout<<"1"<<endl;

        }
        else{
            bool ok = false;
             for(int i=0;i<n;i++){
                if((s-a[i])%3==0){
                    ok = true;
                    break;
                }
            }
            if(ok)cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }

   }
}
