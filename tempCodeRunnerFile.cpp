#include <bits/stdc++.h>
using namespace std;

int main() {
	    int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string ans="";
            map<int,int> mp;
            vector<int> a(n);
            vector<char> s(n);
            for (int i = 0; i < n; i++)
            {
                cin>>a[i];
                mp[a[i]]++;
            }
            if(mp.size()==1){
                cout<<"NO\n";
            }
            else{
                s[0]='R';
                s[n-1]='R';
                // bool ok = true;
                for(int i=1;i<n-1;i++){
                    if(a[i]==a[i-1]){
                        if(s[i-1]=='R'){
                            s[i]='B';
                        }
                        else{

                            s[i]='R';
                        }
                    }
                    else{
                         if(s[i-1]=='R'){
                            s[i]='B';
                        }
                        else{

                            s[i]='R';
                        }
                    }
                }

                cout<<"YES\n";
                for (int i = 0; i < n; i++)
                {
                    cout<<s[i];
                }
                cout<<endl;
                

            }

            
        }
}