#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i;
    char c[10];
  
    cin >> t;
    while(t--)
    {   
        for( i=0;i<9;i++)
        {
            cin>>c[i];
            if(c[i]=='?'){
                a=i;
            }
        }
       
        if(a==0 || a==3 || a==6){
            if((c[a+1] == 'A' && c[a+2]=='B')||(c[a+1] == 'B' && c[a+2]=='A') ){
                cout<<'C'<<endl;
            }
            else if((c[a+1] == 'B' && c[a+2]=='C')||(c[a+1] == 'C' && c[a+2]=='B') ){
                cout<<'A'<<endl;
            }
            else{
                cout<<'B'<<endl;
            }
        }
        else if ( a==1 || a==4 || a==7){
            if((c[a-1] == 'A' && c[a+1]=='B') || (c[a-1] == 'B' && c[a+1]=='A')){
                cout<<'C'<<endl;
            }
            else if((c[a-1] == 'B' && c[a+1]=='C') || (c[a-1] == 'C' && c[a+1]=='B')){
                cout<<'A'<<endl;
            }
            else{
                cout<<'B'<<endl;
            }
            
        }
        else{
            if((c[a-1] == 'A' && c[a-2]=='B')|| (c[a-1] == 'B' && c[a-2]=='A')){
                cout<<'C'<<endl;
            }
            else if((c[a-1] == 'B' && c[a-2]=='C')|| (c[a-1] == 'C' && c[a-2]=='B')){
                cout<<'A'<<endl;
            }
            else{
                cout<<'B'<<endl;
            }
            
        }

    }
}