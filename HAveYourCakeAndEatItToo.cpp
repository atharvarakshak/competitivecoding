// Abhinav Awasthi
//Youtube: https://y...content-available-to-author-only...e.com/abhinavawasthi
//Linkedin: https://w...content-available-to-author-only...n.com/in/abhinavawasthi01
//Linktree: https://l...content-available-to-author-only...r.ee/abhinavawasthi
//Codeforces: https://c...content-available-to-author-only...s.com/profile/abhinavawasthi
//Codechef: https://w...content-available-to-author-only...f.com/users/abhinavawasthi

#include <iostream>
#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace chrono;
// using namespace __gnu_pbds;

// def
// #define AbhinavAwasthi 1

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;

//Constants
const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
#define pimp cout<<"IMPOSSIBLE\n";
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()

//Debug
#ifdef AbhinavAwasthi
#define debug(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();fl(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;fl(i,n)s+=v[i];return s;}

// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

//Graph-dfs
// bool gone[MN];
// vector<int> adj[MN];
// void dfs(int loc){
//     gone[loc]=true;
//     for(auto x:adj[loc])if(!gone[x])dfs(x);
// }

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

//Code by Abhinav Awasthi
//Language C++
//Practice->Success

//Code
bool check(vector<int>v,ll x,vector<vector<ll>>&vp){
    ll sum=0;
    int ind=0;
    int l=0;
    vector<pair<int,pair<int,int>>>ans;
    for(int i=0;i<vp[ind].size();i++){
        sum+=vp[v[ind]][i];
        if(sum>=x){
            ans.push_back({v[ind],{l,i}});
            ind++;
            sum=0;
            l=i+1;
            if(ind==3)break;
        }
    }
    if(ind==3){
        sort(ans.begin(),ans.end());
        for(auto &it:ans){
            cout<<it.second.first+1<<" "<<it.second.second+1<<" ";
        }
        cout<<"\n";
        return true;
    }
    else{
        return false;
    }
}
void asquare()
{
    ll n;
    cin>>n;
    vector<vector<ll>>vp(3);
    for(int i=0;i<3;i++){
        vll v(n);
        cin>>v;
        vp[i]=v;
    }
    ll x=(sumvec(vp[1])+2)/3;
    if(check({0,1,2},x,vp))return;
    if(check({0,2,1},x,vp))return;
    if(check({1,0,2},x,vp))return;
    if(check({1,2,0},x,vp))return;
    if(check({2,1,0},x,vp))return;
    if(check({2,0,1},x,vp))return;
    cout<<"-1\n";
}
//Main
int main()
{
    Code By Asquare
    // asquare();
    ll t;
    cin>>t;
    fl(i,t)
    {
        asquare();
    }
    return 0;
}
//End