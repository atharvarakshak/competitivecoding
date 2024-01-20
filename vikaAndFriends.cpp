#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n,m,k,x,y;
  
    cin>>t;
    while(t>0)
    {
        cin>>n>>m>>k;
        cin>>x>>y;
         vector<int> a(k),b(k);
        for(i=0;i<k;i++)
        {
            cin>>a[k]>>b[k];
        }
        bool temp=true;
         
        for(i=0;i<k;i++)
        {
            int dis=abs(x-a[i])+abs(y-b[i]);
            if(dis%2==0)
            {
                temp=false;
            }
        }
      
        if(temp==false)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


        t--;
    }
    return 0;

}