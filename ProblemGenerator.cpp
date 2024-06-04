#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<char, int> charMap = {
        {'A', 1}, {'B', 1}, {'C', 1}, {'D', 1}, 
        {'E', 1}, {'F', 1}, {'G', 1}
    };

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        unordered_map<char,int> mp;
        set<char> st;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
            st.insert(s[i]);
        }
        int c=0;
        for(auto x: mp){
            if(x.second < m){
                c+=(m-x.second);
            }
        }
        int cp=7;
        for(auto i : st){
            if(charMap[i]==1){
                cp--;
            }
        }
        cout<<(m*cp)+c<<endl;
       
        // cout<<c*m<<endl;
    }
    return 0;
}
