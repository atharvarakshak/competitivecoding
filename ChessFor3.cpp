#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    int t= p1+p2+p3;
    if(p1==0 && p2==0 && p3==0){
        cout<<"0\n";

    }
    else if(t%2!=0){
        cout<<"-1\n";

    }
    else{
        if(p1+p2<=t/2){
            cout<<p1+p2<<endl;
        }
        else{

            cout<<t/2<<endl;
        }
    }
  }
}