#include <bits/stdc++.h>
using namespace std;
int query(int i,int j){
    cout<<"?"<<" "<<i<<" "<<j<<endl;
    long long res;
    cin>>res;
    return res;
}
int main()
{
      long long t;
      cin>>t;
  while(t--){
        int n,m;
        cin>>n>>m;
        int res = query(1,1);
       long long res2=0,res3=0,x2=0,y2=0,x3=0,y3=0;
       if(res<=n-1){
        x2=res+1;
        y2=1;
        res2=query(res+1,1);
    }
    else{
        x2=n;
        y2=res-n+2;
        res2=query(n,res-n+2);
    }
    if(res<=m-1){
        x3=1;
        y3=res+1;
        res3=query(1,res+1);
    }
    else{
        x3=res-m+2;
        y3=m;
        res3=query(res-m+2,m);
        }
       x3+=(res3/2);
       y3-=(res3/2);
       x2-=(res2/2);
       y2+=(res2/2);
       long long res4=query(x3,y3);
       if(res4==0){
        cout<<"! "<<x3<<" "<<y3<<endl;
       }
       else{

        cout<<"! "<<x2<<" "<<y2<<endl;
       }
     }
}