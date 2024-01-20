#include<bits/stdc++.h>
using namespace std;

int main(){
    string p = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int n,t;
    string s; 
    char c;
    
  
    cin>>c>>s;
        if(c=='R'){
            for(int i=0;i<s.length();i++){
                for(int j=0;j < p.length();j++){
                    if(s[i]==p[j] && j==0){
                        cout<<p[j];
                        break;
                    }
                    else if(s[i]==p[j]){
                        cout<<p[j-1];
                        break;
                    }
                }
            }
            cout<<endl;
        }
        else{
                for(int i=0;i<s.length();i++){
                for(int j=0;j < p.length();j++){
                    if(s[i]==p[j] && j==p.length()-1){
                        cout<<p[j];
                        break;
                    }
                    else if(s[i]==p[j]){
                        cout<<p[j+1];
                        break;
                    }
                }
            }
        }
    
}