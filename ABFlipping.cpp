#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n, k, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        count = 0, k = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (count <= s.length())
            {

                if (s[i] == 'A' && s[i + 1] == 'B')
                {
                    swap(s[i], s[i + 1]);
                    count++;
                    k++;
                   
                }
                else
                {
                    continue;
                }
                 if (i == s.length() - 2)
                    {

                        i = 0;
                    }
            }
            else
            {
                break;
            }
          
        }
        cout << k << endl;
    }
}