#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    string x, y;
    cin >> x >> y;
    int n = x.size();
    string fx="",fy="";
    for (int i = 0; i < n; i++)
    {
            char maxi = max(x[i],y[i]);
            char mini = min(x[i],y[i]);
            if(fx>fy){
                fy+=maxi;
                fx+=mini;
            }
            else{
                fy+=mini;
                fx+=maxi;
            }

    }
    
    cout << fx << '\n' << fy << '\n';
  }
}