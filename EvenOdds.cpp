#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, i, num = 0;
    cin >> n >> k;
    vector<int> a;
    if(n%2 != 0){
        if(k<=(n/2)+1)
        {
            num=(2*k)-1;
            // cout<<"hiii";
        }
        else{
            num=2*(k-((n/2)+1));
        }
    }
    else
    {
     if(k<=(n/2))
        {
            num=(2*k)-1;
        }
    else{
            num=2*(k-(n/2));
        }   
    }
    cout<<num<<endl;
}