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
        int x, y;
         if(n==2020 || n==2021)
        {
                cout << "YES\n";

        }
        else if(n<4040)
        {
            cout << "NO\n";
        }
        else{
            x=n/2020;
            if(n%2020<=x)
            {
                cout << "YES\n";

            }
            else{
                cout << "NO\n";

            }
        }
    }
}