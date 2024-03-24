#include <bits/stdc++.h>
using namespace std;

 long long solve(){
    long long  n;
    cin>>n;
    if(n&1 || n<=3){
        cout<<-1<<endl;
        return 0;
    }
    else{
        n=n/2;
         long long temp1=n/3;
        // main point
        if(n%3==2 || n%3==1){
            temp1++;
        }
         long long temp2=n/2;
        cout<<min({temp1,temp2})<<" "<<max({temp1,temp2})<<endl;
        return 0;
    }
    return 0;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        solve();
    }
}