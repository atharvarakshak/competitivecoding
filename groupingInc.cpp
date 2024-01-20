#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   int n;
    
    cin >> t;
    
    while (t--)
    {
        int c=0,d=0;
        cin >> n;
        vector<int> a(n),p,q;
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                p.push_back(a[i]);
            }
            else{
                q.push_back(a[i]);
            }
        }
        for(int i=0;i<p.size();i++)
        {
            for(int j=1;j<p.size()-1;j++)
            {
                if(p[i]<p[i+1]){
                    c++;
                }
            }
        }
        for(int i=0;i<q.size();i++)
        {
            for(int j=1;j<q.size()-1;j++)
            {
                if(q[i]<q[i+1]){
                    d++;
                }
            }
        }
        cout<<c+d<<endl;
    }
}