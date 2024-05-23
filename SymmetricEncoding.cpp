#include <bits/stdc++.h>
using namespace std;

int main() {
	    int t;
        cin>>t;
        while(t--){
            long long n ;
            cin>>n;
            string s;
            cin>>s;
            int l = s.length();
            set<int> st;
            vector<int> a;
            map<char,char> m;
            for(int i=0;i<l;i++){
                st.insert(s[i]);
            }
            for(auto i : st){
                a.push_back(i);
            }
            sort(a.begin(),a.end());
            int x = a.size()-1;
            for (int i = 0; i < a.size() && x>=0; i++)
            {
                m[a[i]]=a[x];
                x--;
            }
            for (int i = 0; i < l; i++)
            {
                    s[i]=m[s[i]];
            }
            cout<<s<<endl;valerieAgainstEveryone
            

        }
}