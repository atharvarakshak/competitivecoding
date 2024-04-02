#include <bits/stdc++.h>
using namespace std;
vector<long long> d;
void findDivisors(long long n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            d.push_back(i);
            if((n/i)!=i){
                d.push_back(n/i);
            }
        }
    }
    sort(d.begin(),d.end());
}
bool checkString(string a, string b){
    long long c=0;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            c++;
        }
    }
    if(c>1)return false;
    return true;
}
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      string s;
      cin>>s;
      findDivisors(n);
      for(auto &it:d){
        string k1=s.substr(0,it);
        string k2=s.substr(n-it);
        
        string temp1="",temp2="";
        
        for(int i=0;i<(n/it);i++){
            temp1+=k1;
            temp2+=k2;
        }
        
        if(checkString(temp1,s)||checkString(temp2,s)){
            cout<<it<<"\n"; break;
        }
    }
        d.clear();



    }
}