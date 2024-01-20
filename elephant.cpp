#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,count=0,a;
    cin>>x;
    if(x==0)
    {
        cout<<"0"<<endl;
    }
   else if(x>=5)
   {
        count=x/5;
        if(x%5!=0)
        {
            a=x-(5*count);
            if(a%4==0 || a%3==0 ||a%2==0|| a%1==0)
            {
                count++;
            }
        }
   }
   else if(x<5)
   {
     if(a%4==0 || a%3==0 ||a%2==0|| a%1==0)
            {
                count++;
            }
   }
   cout<<count<<endl;
   

}