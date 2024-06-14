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

long long powermod(long long x, long long y, long long p)
{
    long long res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
long long mod_sub(long long a, long long b, long long m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////ASLI MAAL////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int solve()
{

    ll l,r,k;
    cin>>l>>r>>k;


    if(k>=10){
        cout<<"0\n";
    }
    else if(k>=5){
        ll ls = powermod(2,l,MOD);
        ll rs = powermod(2,r,MOD);
        cout<<mod_sub(rs,ls,MOD)<<endl;

    }
    else if(k==4){
        ll ls = powermod(3,l,MOD);
        ll rs = powermod(3,r,MOD);
        cout<<mod_sub(rs,ls,MOD)<<endl;

    }
    else if(k==3){
        ll ls = powermod(4,l,MOD);
        ll rs = powermod(4,r,MOD);
        
        cout<<mod_sub(rs,ls,MOD)<<endl;

    }
    else if(k==2){
        ll ls = powermod(5,l,MOD);
        ll rs = powermod(5,r,MOD);

        cout<<mod_sub(rs,ls,MOD)<<endl;
    }
    else {
        ll ls = powermod(10,l,MOD);
        ll rs = powermod(10,r,MOD);
        cout<<mod_sub(rs,ls,MOD)<<endl;

    }


    return 0;
}


/* Main()  function */
int main()
{
    int tc=1;
    cin>>tc;

    while(tc--)
    {
        solve();
    }

    return 0;
}