#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
        int n;
        string s;
       cin >> n >> s;
        int cntU = 0;
        for(char c : s) 
        {
            if(c == 'U') {
                ++cntU;
            }
        }

        if(cntU%2!=0) cout << "YES" << endl;
        else cout << "NO" << endl;

  }
}