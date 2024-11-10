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

bool isPattern(string& str, int pos) {

    


    return pos >= 0 && pos + 3 < str.size() && str.substr(pos, 4) == "1100";


}

int computeChange(string& binaryStr, int idx, char newValue) {
    idx -= 1;
    if (binaryStr[idx] == newValue) {
        return 0;
    }

    int beforeCount = 0, afterCount = 0;

    if (isPattern(binaryStr, idx - 3)) beforeCount++;



    if (isPattern(binaryStr, idx - 2)) beforeCount++;
    if (isPattern(binaryStr, idx - 1)) beforeCount++;




    if (isPattern(binaryStr, idx)) beforeCount++;

    char originalChar = binaryStr[idx];





binaryStr[idx] = newValue;

    if (isPattern(binaryStr, idx - 3)) afterCount++;


if (isPattern(binaryStr, idx - 2)) afterCount++;


    if (isPattern(binaryStr, idx - 1)) afterCount++;

    if (isPattern(binaryStr, idx)) afterCount++;

    return afterCount - beforeCount;
}

int solve() {
    string s;
    cin >> s;

    int queryCount;
    cin >> queryCount;
    
    if (s.size()<4) {
         char newValue;
        int pos;
        
        
        for (int i = 0; i < queryCount; i++) {
            cin >> pos >> newValue;
            cout << "NO\n";
        }
        return 0;
    }

    bool hasPattern = false;
    int patternCount = 0;

    for (int i = 0; i < s.size() - 3; i++) {
        string segment = s.substr(i, 4);
        if (segment == "1100") {
            patternCount++;
            hasPattern = true;
        }
    }

    for (int i = 0; i < queryCount; i++) {
        int pos;
        char newValue;
        cin >> pos >> newValue;

        patternCount += computeChange(s, pos, newValue);

        if (patternCount <= 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

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