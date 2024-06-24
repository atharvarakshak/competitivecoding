#include <bits/stdc++.h>
using namespace std;


/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
// #define all ()


int helper(   ll i, ll j,vector<vector<ll>> m) {



    ll r = m.size();



    ll c = m[0].size();



    ll curr = m[i][j];
    
    vll v;
    if (i > 0) {
        
        v.pb(m[i-1][j]); 
    
    
     } 
   
    if (i < r - 1) {v.pb(m[i+1][j]);
    
    
    }



    if (j > 0) {
        
        
        v.pb(m[i][j-1]);  }    
    if (j < c - 1){
        
        
         v.pb(m[i][j+1]); }
    

    bool ok = true;
    for (int x : v) {



        
        if (curr <= x) {


            ok = false;
            break;
        }
    }
    
   
    if ( !ok  ) {
        return curr;
    }
    
    sort(v.begin(),v.end());

    
    return v[v.size()-1];
}

int solve()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);  
    
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
           a[i][j]=helper(i,j,a);
        }
        
    }
  




    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }


    return 0;
}


/* Main()  function */
int main()
{ ios_base::sync_with_stdio(false);
cin.tie(NULL);  

    int tc=1;
    cin>>tc;

    while(tc--)
    {
        solve();
    }

    return 0;
}