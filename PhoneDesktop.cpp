#include <bits/stdc++.h>

using namespace std;

int main()
{
//    O(n+logn)
    long int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(y%2!=0){
            y=(y/2)+1;
           

                x-=11;
                x-=((y-1)*7);
            

        }
        else{
            y = y/2;
            x-=(y*7);
        }
        if(y==0){
            
            if(x%15==0 || x<0){
               cout<<abs(x)/15<<endl;
            }
            else{
              
                    cout<<(x/15)+1<<endl;
              
            }
        }
        else{
        if(x<=0){
            cout<<y<<endl;
        }
        else{
           
          if(x%15==0){
            y+=(x/15);
            cout<<(y)<<endl;
          }
          else{
             y+=(x/15);
            cout<<(y)+1<<endl;
          }
        }

        }
    }
}