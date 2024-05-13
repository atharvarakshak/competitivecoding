#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a,b,c,d;
    string s="";
    cin>>a>>b>>c>>d;
    // int minr = min(a,b),maxr = max(a,b),minb = min(c,d),maxb= max(c,d);
    for(int i=1;i<=12;i++){
        if(i==a || i==b){
            s+="a";
        }
        if(i==c || i == d){
            s+="b";
        }
    }
    if(s=="abab" || s=="baba"){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";

    }

  }
}