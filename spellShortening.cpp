#include <bits/stdc++.h>
using namespace std;

int main() {
	    int t;
        cin>>t;
        while(t--){
            int n,p=0;
            cin>>n;
            string s;
            cin>>s;
            unordered_map<char,int> ump;
            for(int i=0;i<s.length();i++){
                ump[s[i]]++;

            }
            for(int i=0;i<n;i++){
                    if(s[i]>s[i+1] ){

                        p=max(p,int(s[i]));
                        break;
                    }
                
            }
            ump[char(p)]-=1;
            for(int i=0;i<n;i++){
                if(ump[s[i]]>0){
                    cout<<s[i];
                    ump[s[i]]-=1;

                }
                
            }
            cout<<endl;

        }
    
}
