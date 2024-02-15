#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        long long n,c=0;
        cin >> n;
        for(int i=1;i<=n;i++){
            if(n%i!=0){
                break;
            }
            c++;
        }
        cout<<c<<endl;
    }
}