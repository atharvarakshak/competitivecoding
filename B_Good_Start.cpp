#include <bits/stdc++.h>
using namespace std;
# define ll long long
int solve()
{
    ll w,h,a,b;
    cin >> w >> h >> a >> b;
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 == x2){
        if(abs(y1 - y2)%b==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        return 0;
    }

    if(y1 == y2){
        if(abs(x1 - x2)%a==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        return 0;
    }
    if((x1 - x2)%a==0 || (y1-y2)%b==0){
       
            cout<<"Yes"<<endl;
        
    }
    else{
        cout<<"No"<<endl;
    }
  
  return 0;  
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    solve();
  }

}