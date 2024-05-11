#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<y<<" "<<x<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
}