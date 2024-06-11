#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,m;
    cin>>n>>m;


    vector<int> x,y;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='#'){
                x.push_back(i+1);
                y.push_back(j+1);
                
            }
        }
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    cout<<x[(x.size()/2)]<<" "<<y[(y.size()/2)]<<endl;
   
  }

}