#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int c3=0,c2=0;
        while(n%2==0){
            n/=2;
            c2++;
        }
        while(n%3==0){
            n/=3;
            c3++;
        }
        if(n == 1 && c2<=c3){
                cout << 2 * c3 - c2 << endl;
        }
        else{
            cout<< -1 <<endl;
        }

    }
}