#include <bits/stdc++.h>
using namespace std;


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
#define rf(i,e,s) for(long long int i=e;i>=s;i--)
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
    // ll n;
    // cin>>n;
    // vi a(n);
    // f(i,0,n) cin>>a[i];
    // set<int> s;

    // if(n==1){
    //     cout<<"0\n";
    // }
    // else{
    //     ll c=0;
    //     map<ll,ll> m;
    //     for(ll i=n-1 ;i>=1;i--){
    //         if(a[i-1]>a[i] && s.find(a[i-1])==s.end()){
    //             c++;
    //             s.insert(a[i-1]);
    //             a[i-1]=0;
    //         }
    //         else if(a[i-1]>a[i] && s.find(a[i-1])!=s.end()){
    //             a[i-1]=0;
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    //     for(int i=n-1;i>=0;i--){
    //         if(s.find(a[i])!=s.end()){
    //             a[i]=0;
    //         }
    //     }
    //     ll x=-1;
    //     for(int i=n-1;i>=0;i--){
    //         if(a[i]==0){
    //             x=i;
    //             break;
    //         }
    //     }
     

    //     for(int i=x;i>=0;i--){
    //         if(a[i]!=0 && s.find(a[i])==s.end()){
    //             c++;
    //         }
    //     }
        
        
    //     cout<<c<<endl;
    // }
     int n;
    cin>>n;
    vector<int>vec(n);
    f(i, 0, n) cin>>vec[i];
    int k = -1;
 
    unordered_map<int, int>mp;
 
    rf(i, n-1, 1)
    {
        if(mp.count(vec[i]) == 0)
        {
            mp[vec[i]] = i+1;
            //cout<<"----"<<mp[vec[i]]<<endl;
        }    
 
        if(vec[i] < vec[i-1])
        {
            k = i;
            break;
        }
    }
 
    set<int>s;
    f(i, 0, k)
    {
        s.insert(vec[i]);
        if( mp[vec[i]] > 0 )
        {
            k = max(k, mp[vec[i]]-1);
        }
    }
 
    cout<<s.size()<<endl;
 
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