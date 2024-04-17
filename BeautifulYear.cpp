#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
    string s = to_string(n);
    sort(s.begin(),s.end());
 
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]) return false;
    }
 
    return true;
}
int main()
{
   long long n;
   cin>>n;
   
    vector<int> v;
 
   for(int i=1000;i<=9013;i++){
     if(check(i)) v.push_back(i);
   }
 
   for(int i=0;i<v.size()-1;i++){
    if(v[i]>n){
        cout<<v[i];
        break;
    }
   }
 
   cout<<endl;
    return 0;
}