#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    long long c,d;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        // n = n/2;
        //k =  (k+1)/2
        if(k==((4*n )-2)){
            cout<<(k/2)+1<<endl;
        }
        else{
            // 
        if(k%2==0){
            cout<<k/2<<endl;
        }
        else{
            cout<<(k/2)+1<<endl;
        }
        }
    }
}