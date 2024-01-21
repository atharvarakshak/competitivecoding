#include <bits/stdc++.h>
using namespace std;
//copied
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
int main()
{
      int n,t;
      cin>>t;
      while(t--)
      {
        int a,b,kx,ky,qx,qy;
        cin>>a>>b>>kx>>ky>>qx>>qy;
        set<pair<int,int>> s1,s2;
        for(int i=0;i<4;i++){
            s1.insert({kx+dx[i]*a,ky+dy[i]*b});
            s2.insert({qx+dx[i]*a,qy+dy[i]*b});
            s1.insert({kx+dx[i]*b,ky+dy[i]*a});
            s2.insert({qx+dx[i]*b,qy+dy[i]*a});
        }
        int c=0;
        for(auto x:s1){
            if(s1.find(x) != s2.end()){
                c++;
            }
        }
        cout<<c<<endl;
      }
}