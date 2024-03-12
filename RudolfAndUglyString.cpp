#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;

	cin>>t;
	while(t--)
	{
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=1;i<n-1;i++){
            if((s[i-1]=='m' && s[i]=='a' && s[i+1]=='p') || (s[i-1]=='p' && s[i]=='i' && s[i+1]=='e')){
                
                c++;
            }
            if(i+3<=n-1){
                if((s[i-1]=='m' && s[i]=='a' && s[i+1]=='p' &&  s[i+2]=='i' && s[i+3]=='e' )){
                    c--;
                    
                }
            }
        }
        cout<<c<<endl;
    }
}