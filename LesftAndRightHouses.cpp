#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
     long long l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    for(int i=0;i<n; i++){
        if(s[i] == '0') r0++;
        else r1++;
    }
 
    long long ans = -1;
    for(int i=0;i<n; i++){
        if(l0 >= l1 && r1 >= r0){
            if(abs(n - 2 * ans) > abs(n - 2 * i)){
                ans = i;
            }
        }
        if(s[i] == '0') l0++, r0--;
        else l1++, r1--;
    }
    if(l0 >= l1 && r1 >= r0){
        if(abs(n - 2 * ans) > abs(n - 2 * n)){
            ans = n;
        }
    }
    cout << ans << '\n';

    }
}