#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        long long n;
        cin>>n;
        if(n%2==1 || n==2){
                cout<<"-1"<<endl;
          
        }
        else{
            long long maxi=0;
            if(n==4 || n==6){
                cout<<"1 1\n";
            }
            else{

            if((n)%6==0){
                maxi=n/6;
            }
            else {
                maxi=(n/6)+1;
           
            }
            cout<<maxi<<" "<<n/4<<endl;
            }
        }
    }
}