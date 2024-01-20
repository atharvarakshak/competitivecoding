#include<bits/stdc++.h>
using namespace std;
// int sortArray(int a,int N)
// {

// }
int main()
{
    int t, n, m,temp;
    long int k;
    cin >> t;

    while (t > 0)
    {
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        // int a[1000],b[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        //     sort(a.begin(), a.end());
        //     sort(b.begin(), b.end());
        for (int i = 1; i <= k; i++)
        {
            // sortArray(a,n);
            // sortArray(b,m);
            if (i % 2 == 0)  //gelly
            {
                if(*min_element(b.begin(),b.end())<*max_element(a.begin(),a.end()))
                {

                swap(*min_element(b.begin(),b.end()), *max_element(a.begin(),a.end()));
                    // temp=min_element(b.begin(),b.end());

                }
            }
            else   //jelly
            {
                if(*min_element(a.begin(),a.end())<*max_element(b.begin(),b.end()))
                {

                swap(*min_element(a.begin(),a.end()),*max_element(b.begin(),b.end()));
                }
            }
        }
        

        t--;
    }
}