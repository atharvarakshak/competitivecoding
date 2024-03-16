#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        long long a[2][n];
        string s1,s2;
        cin>>s1>>s2;
        for (int i = 0; i < n; i++)
        {
            a[0][i]=s1[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[1][i]=s2[i];
        }
        
        if(n==2){
            cout<<"YES"<<endl;
        }
        else if(n==3){

        }
        else if(s2[n-2]=='<'){
            cout<<"NO"<<endl;
        }
        else{
            
                bool ok = true;
                int i=1,j=n-2;
                while(j>0){
                        if(a[(i+1)%2][j-1]=='>'){
                            i=(i+1)%2;
                            j--;

                        }
                        else if(a[i][j-2]=='>' && j>=2){
                            j-=2;
                        }
                        else{
                            ok=false;
                            break;
                        }   
                }
                if(ok){
                cout<<"YES"<<endl;

                }
                else{
                cout<<"NO"<<endl;

                }
            
        }
    }
}