#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,count=0,a=0;
    string s;
    cin >> n;
    cin>>s;
    if(s.length()==1 && s[0]=='.'){
        cout<<"1\n";
    }
    else{
         for(int i=1;i<n-1;i++)
    {
     
        if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
            count=1;
        }
        else{
            if(s[i]=='.'){
                a++;
            }
        }
       

    }
    if(s[0]=='.'){
        a++;
    }
    if(s[n-1]=='.'){
        a++;
    }
    if(count==1){
        cout<<"2\n";
    }
    else{
        cout<<a<<endl;
    }
   
    }
    
  }
}