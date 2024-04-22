#include <bits/stdc++.h>
using namespace std;

int main() {
	    int t;
        cin>>t;
        while(t--){
            int n,c=0;
            cin>>n;
            vector<int> a(n);
            map<int,int> m;
            for (int i = 0; i < n; i++)
            {
                    cin>>a[i];
                    m[a[i]]++;
            }
            sort(a.begin(),a.end());
            if(n<3){
                cout<<"0\n";
            }
            else{
                
                for(auto i : m){
                    if(i.second>=3){
                        c+=i.second/3;
                    }
                }
                
                
            cout<<c<<endl;
            }
        }   
}