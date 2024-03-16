#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){

        int n;
        cin>>n;
        vector<int> a(n),b;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(is_sorted(a.begin(),a.end())){
             cout<<"YES"<<endl;
             continue;
        }
    
        // bool ok =true;
        b.push_back(a.back());
        for(int i=n-2;i>=0;i--){
           if(a[i]>=10 && a[i]>b.back()){
                int r = a[i]%10;
                int q =a[i]/10;
                b.push_back(r);
                b.push_back(q);
           }
           else{
                b.push_back(a[i]);
           }
        }
         
         reverse(b.begin(),b.end());
         if(is_sorted(b.begin(),b.end())){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;

         }

    }
}