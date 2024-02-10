#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n,t;
      cin>>t;
     while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        map<int,vector<char>>m;
        string s="";
   
        for(auto c:v){
            if(m[c].size()==0){
                m[c].push_back('a');
                s+='a';
            }
          cout<<m[c].size()<<" ";
        }
        cout<<s<<endl;
    }
}
