#include<bits/stdc++.h>
using namespace std;
int main()
{
  
        long long n,c=0;
        cin>>n;
        for (int i = n; i >=1; i--)
        {
            c+=i;
        }
        if(n%2==0){

        cout<<c<<endl;
        }
        else{
        cout<<c+1<<endl;

        }
        
    
}   