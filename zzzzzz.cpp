#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    // int c=0;
    // int arr[10]={1,2,1,2,3,3,4,5,5};
    // for(int i=0 ;i < 9;i++){
    //     c^=arr[i];
    // }
    // cout<<c;
    // int a=10;
    // while(a++ && a<20){
    //     cout<<a<<" ";
    // }
    // int n=0;
    // int count=0;
    // if(n<0){
    //     count--;
    // }
    // else if(n==0){
    //     count=1;
    // }
    // else{

    // while(n){
    //     n/=10;
    //     count++;

    // }
    // }
    // cout<<count;
    // int n=1234;
    // string s =to_string(n);
    
    // cout<<string(s.rbegin(),s.rend());

    // palindrome
    // int n=121;
    // string s = to_string(n);
    // bool ok = false;
    // int l=0,r=s.length()-1;
    // while(l<=r){
    //     if(s[l]==s[r]){
    //         ok = true;
    //     }
    //     else{
    //         ok=false;
    //         break;
    //     }
    //     l++;
    //     r--;
    // }
    // cout<<ok;
    // armstrong number


    // int n = 370;
    // // bool ok = false;
    // string s = to_string(n);
    // int sum = 0;
    // // cout<<int(s)+47;
    // for(int i=0 ;i<s.length();i++){
    //     // cout<<int(s[i])-48;
    //     sum += (int(s[i])-48)*(int(s[i])-48)*(int(s[i])-48);
    // }    
    // if(sum==n){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;

    // }
    // int n=5;
    
    // string s = "01";
    int a[100]={0,1};
    vector<pair<int,int>> v;
    v.push_back(make_pair(0,0));
    v.push_back(make_pair(1,1));
    
    // int l = s.length()-1;
    for(int i=2;i<12;i++){
        a[i] = a[i-1]+a[i-2];
        v.push_back(make_pair(i,a[i]));
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<v[5+1].second;

}