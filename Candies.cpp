

#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
 
        long long sum = 1;
        long long ans ;
        long long i = 1;
 
        while(true){
 
             sum+=pow(2,i);
             i++;
 
            if(n%sum==0){
                ans = n/sum;
                break;
            }
            
        }
 
        cout<<ans<<endl;
    }
}