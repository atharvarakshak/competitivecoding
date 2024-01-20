#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    vector<string> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].length()%2==0)
            {
                if(s[j].length()%2==0)
                {
                    
                }
            }
            else
            {
                if(s[j].length()%2!=0)
                {

                }
            }
        }
    }

    cout<<count<<endl;
}
