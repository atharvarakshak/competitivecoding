#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, k, t, y;
    cin >> t;
    while (t--)
    {
        int sum, sum1, n;
        cin >> x >> k;
        if (x < 10)
        {
            if(x%k==0)
            {
                cout<<x<<endl;
            }
            else{
             while (sum!=k)
                {

                    x++;
                    y = x;
                    sum = 0;
                    while (y > 0)
                    {
                        sum += y % 10;
                        y /= 10;
                    }
                }
                cout<<x<<endl;
            }
        }
        else
        {
            if (x % 10 == 0)
            {
                // int sum=0;
                while (x % k != 0)
                {

                    x++;
                    y = x;
                    sum = 0;
                    while (y > 0)
                    {
                        sum += y % 10;
                        y /= 10;
                    }
                }
                cout << x + 1 << endl;
            }
            else
            {
                if (x % k == 0)
                {
                    cout << x << endl;
                }

                else
                {
                    while (sum1 % k != 0)
                    {

                        while (sum1 % k != 0)
                        {
                            x++;
                            y = x;
                            sum1 = 0;
                            while (y > 0)
                            {
                                sum1 += y % 10;
                                y /= 10;
                            }
                        }
                        cout << x << endl;
                    }
                }
            }
        }
    }
}