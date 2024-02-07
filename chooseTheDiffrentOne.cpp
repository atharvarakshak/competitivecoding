#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n,m,k,x;
    cin>>n>>m>>k;
    vector<long long> a(n),b(m);
    set<long long > p1,p2,s;
    unordered_map<int,int> m1,m2;
  

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
       
      
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        
      
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=k){
            p1.insert(a[i]);
        }
       
      
    }
    for (int i = 0; i < m; i++)
    {
        if(b[i]<=k){
            p2.insert(b[i]);
        }
       
        
      
    }
  
   
   if(p1.size()<k/2 || p2.size()<k/2){
    cout<<"NO"<<endl;
   }
    // cout<<p1<<" "<<p2<<endl;
    else{
           int  x=1;
          set<long long> s;
          for(auto x1:p1){
           s.insert(x1);
          }

          for(auto x1: p2){
             s.insert(x1);
          }
                 
            for(int i=1;i<=k;i++){
                  if(s.find(i)==s.end()){
                    x=0;
                  };
            }
           if(x==1)
            {
                cout<<"YES"<<endl;
            }
           else{
             cout<<"NO"<<endl;
           }

  }
}
}