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

#define MOD 998244353
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



ll modExp(ll base, ll exp) {
    ll res = 1 % MOD;
    base %= MOD;
    while(exp) {
        if(exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}
 
int solve() {
    ll n;
    cin >> n;
    vll v(n);
    f(i, 0, n) cin >> v[i];
    

    vector<ll> prefix2(n, 0);
    if(n > 0) prefix2[0] = (v[0] == 2);
    f(i, 1, n) {
        prefix2[i] = prefix2[i-1] + (v[i] == 2);
    }
 
    vector<ll> ones, threes;
    f(i, 0, n) {
        if(v[i] == 1) ones.push_back(i);
        else if(v[i] == 3) threes.push_back(i);
    }
    
    // Precompute power of 2 up to n (n is an upper bound for exponent)
    ll maxExp = n + 5;
    vector<ll> power(maxExp, 0), invPow(maxExp, 0);
    power[0] = 1;
    for (ll i = 1; i < maxExp; i++) {
        power[i] = (power[i-1] * 2) % MOD;
    }
    // Since MOD is prime, inverse of 2 is modExp(2, MOD-2)
    ll inv2 = modExp(2, MOD-2);
    invPow[0] = 1;
    for (ll i = 1; i < maxExp; i++) {
        invPow[i] = (invPow[i-1] * inv2) % MOD;
    }
    
    // For each index j with value 3, define A_j = 2^(# of 2's up to index j-1).
    // (For j==0, we define A_j = 1 since there are 0 2's before.)
    vector<ll> A;
    for (ll j : threes) {
        ll cnt = (j - 1 >= 0 ? prefix2[j-1] : 0);
        A.push_back(power[cnt]);
    }
    
    // Build prefix sums over A (for threes vector) so that we can quickly sum over all j > i.
    vector<ll> prefixA(A.size(), 0);
    if(!A.empty()) {
        prefixA[0] = A[0];
        for (size_t i = 1; i < A.size(); i++) {
            prefixA[i] = (prefixA[i-1] + A[i]) % MOD;
        }
    }
    
    ll ans = 0;

    for (ll i : ones) {
        // Find the first index in 'threes' that is greater than i.
        auto it = std::lower_bound(threes.begin(), threes.end(), i + 1);
        if(it == threes.end()) continue; // no 3 appears after i
        ll pos = it - threes.begin(); // first valid position in threes vector
        ll count = threes.size() - pos;  // number of 3's with index > i
        // Sum over these A_j values:
        ll sumA = (prefixA.back() - (pos > 0 ? prefixA[pos-1] : 0)) % MOD;
        if(sumA < 0) sumA += MOD;
        // X = 2^(- prefix2[i])
        ll X = invPow[prefix2[i]];
        ll contribution = ( (X * sumA) % MOD - count ) % MOD;
        if(contribution < 0) contribution += MOD;
        ans = (ans + contribution) % MOD;
    }
    
    cout << ans % MOD << "\n";
    return 0;
}
 


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