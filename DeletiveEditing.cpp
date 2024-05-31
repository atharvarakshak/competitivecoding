#include<bits/stdc++.h>
using namespace std;

// #define ll         long long int
#define int            int64_t
#define all(x)        x.begin(),x.end()
#define rall(x)       x.begin(),x.end()
#define forn(i,a,b)    for(int i = a ; i<b ; i++)
#define forr(j,c,d)   for(int j = c ; j>=d ; j--)
#define fora(a,b)     for(auto& a : b)
#define yes           cout<<"Yes"<<endl
#define no            cout<<"No"<<endl
#define YES           cout<<"YES"<<endl
#define NO            cout<<"NO"<<endl
#define mvi           vector<int>
#define mvc           vector<char>
#define mvs           vector<string>
#define mpi           map<int,int>
#define mps           map<string,string>
#define umpi          map<string,string>
#define umps          map<int,int>
#define nn            cout<<"\n"

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        vector<int> v(26,0);

        fora(x,s){
            v[x-'a']++;
        }

        int c = 0;

        forn(i,0,t.length()){
            
            int m = 0;
            forn(j,0,s.length()){
                
                if(t[i]==s[j]){
                   if(v[s[j]-'a']==1) c++;
                  m = j;
                  break;
                }
                // v[s[j]-'a']--;
            }

            forn(k,0,m)  v[s[k]-'a']--;
        }
         
        // cout<<c<<endl;
        
        if(c>0) YES;
        else NO;


    }


    
    return 0;
}