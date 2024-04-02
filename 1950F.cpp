#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
        cin>>a>>b>>c;
        multiset<int> s;
        for(int i=0;i<c;i++){
            s.insert(0);
        }
        for(int i=0;i<b;i++){
            if(s.empty()){
                cout<<"-1\n";return;
            }
            long long x = *s.begin();
            s.erase(s.begin());
            s.insert(x+1);
        }
        for (int  i = 0; i < a; i++)
        {
            if(s.size()<2){
                cout<<"-1\n";return;
            }
            s.erase(s.begin());
            long long x = *s.begin();
            s.erase(s.begin());
            s.insert(x+1);
        }
        if(s.size()==1){
            cout<<*s.begin()<<endl;
        }
        else{
            cout<<"-1\n";
        }
        return;
        
}
int main()
{
    int t,i,n,k,count=0;
    cin>>t;
    while (t--)
    {
        
        solve();
    }
}