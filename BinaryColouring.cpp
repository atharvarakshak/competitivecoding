#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        vector<int> a, temp;
        if (x == 1)
        {
            cout << "1\n";
            cout << "1\n";
        }

        else
        {
            while (x > 0)
            {
                if (x % 2 == 0)
                {
                    a.push_back(0);
                }
                else
                {
                    if ((x - 1) / 2 % 2 == 0)
                    {
                        a.push_back(1);
                        x -= 1;
                    }
                    else
                    {
                        a.push_back(-1);
                        x += 1;
                    }
                }
                x /= 2;
            }
            cout<<a.size()<<endl;
            for (int i = 0; i < a.size(); i++)
            {
                    cout<<a[i]<<" ";
            }
            cout<<endl;
            
         
        }
    }
}