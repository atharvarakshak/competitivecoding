#include <bits/stdc++.h>
using namespace std;

int longestRepeatedSubstring(string s,int n){

    int lcs[n+1][n+1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            lcs[i][j]=0;
        }
        
    }
    string res;
    int res_length=0;
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n;j++){
            if(i+j>n){
                continue;
            }
            if(s[j-1]==s[j+i-1] || s[j+i-1]=='?' || s[j-1]=='?'){
                lcs[j][i+j]=lcs[j-1][i+j-1]+1;
                if(lcs[j][i+j]==i){
                    res_length=max(res_length,i);
                }
            }
            else{
                lcs[j][i+j]=0;
            }
        }
    }
    return res_length;
    

}
int main() {
	    int t;
        cin>>t;
        while(t--){
            
            string s;
            cin>>s;
            cout<<2*longestRepeatedSubstring(s,s.length())<<endl;;

        }
}