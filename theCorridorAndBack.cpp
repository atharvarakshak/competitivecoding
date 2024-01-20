#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, d, s, k,least;
    cin >> t;
    while (t > 0)
    {
        cin >> n;
        // vector<int> l(n),d(n),s(n);
        cin>>d>>s;
        least=d+((s-1)/2);
        for (int i = 1; i < n; i++)
        {
            cin >> d>>s;
            least=min(least,d+(s-1)/2);
        }
        // sort(d.begin(),d.end());
        // rem=d[n-1]-d[0];

        // for (int i = n; i>=0; i--)
        // {
        //   if(s[i]%2==0)
        //   {
        //     if((s[i]/2)-1 >(s[n]/2)-1)
        //     {

        //     }
        //   }

        // }
        // sort(l.begin(),l.end());
        cout<<least<<endl;


        t--;
    }
}