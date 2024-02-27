#include<bits/stdc++.h>
using namespace std;
string numTobits(long long x){
    string bits="";
    while(x>0){
        char bit='0'+(x%2);
        bits+=bit;
        x/=2;
    }
    while(bits.size()<31)bits+="0";
    return bits;
}
int main()
{
    int i,j,t;
  
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,long long> mp;
        vector<long long> a(n);
        // cin>>a;
        for(int i=0;i<n;i++){
            cin>>a[i];
            string bits = numTobits(a[i]);
            mp[bits]++;
          
        }
        long long ans = n;
        for(int i=0;i<n;i++){
                long long x = a[i];
            string flipbits="";
            string bits= numTobits(a[i]);
            if(mp[bits]==0)continue;
            while(x>0){
                char bit = '0'+(x%2);
                if(bit == '0'){
                    flipbits+="1";
                }
                else flipbits+="0";
                x/=2;

            }
            while(flipbits.size()<31)flipbits+="1";
            if(mp[flipbits]>0){
                mp[flipbits]--;
                mp[bits]--;
                ans--;
            }
        }
        cout<<ans<<endl;


    }
}