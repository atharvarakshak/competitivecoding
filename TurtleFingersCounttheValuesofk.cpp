#include <bits/stdc++.h>
using namespace std;
void solve(int a,int b,int l){
    int x=0;
    set<int> st;
    while(true){
        if(int(pow(a,x))>l)break;
        if((l%int(pow(a,x)))!=0)break;
        long long curr = l/int((pow(a,x)));
        st.insert(curr);
        while(curr%b==0){
            curr/=b;
            st.insert(curr);
        }
        x++;
    }
    cout<<st.size()<<endl;
}
int main()
{
    int t;
    
    cin >> t;

   while(t--){
        
    long long int a,b,l;
    cin>>a>>b>>l;
    solve(a,b,l);

   }
}