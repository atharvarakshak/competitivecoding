#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n,two=0;
	    cin>>n;
        vector<long long> a(n);
        map<long long,long long> map;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            // map[a[i]]++;
            if(a[i]==2){
                two++;
            }
        }
        long long  bc=0,m=1,ac=0,b=0,ans=0;
        for(int i=0;i<n;i++){
            
            if(a[i]==2){
                ac++;
            }
            if(ac*2==two)
            {
                ans =i +1;
                
                b=1;
                break;
            }
            
        }

       

        if(b==1){
            cout<<ans<<endl;
        }
        else{
            cout<<"-1"<<endl;

        }
        
       
        
    }
}