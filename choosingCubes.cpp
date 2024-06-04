#include<bits/stdc++.h>
using namespace std;

int main(){
       int t;
       cin>>t;
       while(t--){
            int n,f,k;
            cin>>n>>f>>k;
            vector<int> a(n);
            for (int i = 0; i < n; i++)
            {
                cin>>a[i];
            }

            int fav = a[f-1];

            sort(a.rbegin(),a.rend());

            if(a[k-1]<fav){
                cout<<"YES\n";
            }
            else if(fav<a[k-1]){

                cout<<"NO\n";
            }
            else{
                if(n==k){
                cout<<"YES\n";

                }
                else if(fav!=a[k]){
                cout<<"YES\n";

                }
                else{
                cout<<"MAYBE\n";

                }
            }
            
       }
}