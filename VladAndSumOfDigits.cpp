#include<bits/stdc++.h>
using namespace std;
long long sum(int n){
    long long s =0;
    while(n>0){
                s+=(n%10);
                n=n/10;
            }
            return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,t;
  
    cin>>t;
    while(t--)
    {
        long long n,s=0,c=0,x=0;
        cin>>n;
        vector<long long> v(n);
        for(int i=1;i<=n;i++){
            // cout<<i<<endl;
            v[i-1]==i;
            c++;
            if(c>=10){
                
                v[i-1]=i-(9*x);
            }
            else{

            }
            
            x++;
            
        }
       
        cout<<s<<endl;
    }
}