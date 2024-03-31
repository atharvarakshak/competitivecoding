#include <bits/stdc++.h>
using namespace std;

void solve(int n) {

 
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    int i=0;

    while(true){
        if(i>=v.size()){
            break;
        }
        
        int x = v[i]*10;
        int y = (x)+1;
        if(x<=n){

            v.push_back(x);
        }
        if(y<=n){

            v.push_back(y);
        }
        i++;

    }
    reverse(v.begin(),v.end());
    while(n>1){
        bool ok = false;
        for(int i=0;i<v.size();i++){
            if(n%v[i]==0){
                n/=v[i];
                ok = true;
            }
        }
        if(!ok){
            break;
        }
    }
    if(n==1){
        cout<<"YES"<<endl;
    }
    else{
        
        cout<<"NO"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       solve(n);
    }
    return 0;
}
