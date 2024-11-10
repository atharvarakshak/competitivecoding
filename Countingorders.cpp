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
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) {  for (auto x : v) cout << x << " "; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////ASLI MAAL////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int solve()
{
    ll n;
    cin>>n;
    vll a(n),b(n),c(n);
    f(i,0,n) cin>>a[i];
    f(i,0,n) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll l=0,r=0;
    while(l<n && r<n){
        if(a[l]>b[r]){
        
            c[r]=n-l;
            r++;
        }
        else{
            l++;
        }

    }

    ll k=0;
    ll ans=1;

    for(int i=n-1;i>=0;i--){
        ans= (ans*(c[i]-k))%MOD;
        k++;
    }

    cout<<ans%MOD<<endl;

    // f(i,0,n)cout<<a[i]<<" ";
    // cout<<endl;
    // f(i,0,n)cout<<b[i]<<" ";
    // cout<<endl;
    // f(i,0,n) cout<<c[i]<<" ";
    return 0;
}

/*
    9 6 8 4 5 2
    4 1 5 6 3 1

    0 1 2 3 4 5
    2 4 5 6 8 9
    1 1 3 4 5 6
    6 6 5 4 3 2
    2 2 
    4 4 4
    5 5 5 5
    6 6 6 6 6
    8 8 8 8 8 8
    9 9 9 9 9 9 

    1 2 2 2 2 2



*/

/* Main()  function */
int main()
{
 ios_base::sync_with_stdio(false);
cin.tie(NULL);  
    int tc=1;
    cin>>tc;

    while(tc--)
    {
        solve();
    }

    return 0;
}