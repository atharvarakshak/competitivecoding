#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n, k, x;
    cin >> t;
    while (t --)
    {
        long long c=0,p=0;
        cin >> n ;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        while(c<n && a[c]==0){
            c++;
        }
        for(int i=c;i<n-1;i++){
            if(a[i]==0){
                p++;
            }
            p+=a[i];
        }
        cout<<p<<endl;
    }
}