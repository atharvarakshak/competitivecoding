#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    cout<<2*(n-1)+1<<endl;
    cout<<1<<" "<<1<<" "<<n<<endl;
    for(int i = 1; i < n; i++)
    {
        cout<<i+1<<" "<<1<<" "<<i<<endl;
        cout<<i+1<<" "<<i+1<<" "<<n<<endl;

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