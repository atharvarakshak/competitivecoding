#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
        string s;


        cin>>s;
        long long time  = (    s[0]- '0') *   10+s[1]-'0';


        long long  mak =( ( s[3] - '0') * 10  )  + s[4]-'0';
        
        if(time==12)
        {
             cout<<s<<" PM";
        }

        else if(time==24)
         { 
            cout<<   "12:00 AM";
        }
        else if(time<12 && time!=00){ 
            cout<<s<<" AM";
        }



        else if(time>12){


            if(mak<10){

                if(time  -  12 >=   10) 
                {
                    cout<<time-12<<":0"<<mak<<" PM";
                }
                else{ 
                    
                    cout<<"0"<<time-12<<":0"<<mak<<" PM";
                }
            }
             else if(mak>=10){


                if(time - 12 >=   10) {
                    
                    cout<<  time-12 <<  ":"<<mak<<  " PM";
                }
                else {
                    
                    
                    cout<<"0"<< time  - 12<< ":" <<  mak  << " PM";
                }

            }
        }
        else if(time == 00){ 
            
           if(mak >=  10)  cout<<12<<":"<<mak<<" AM";
           else cout<<12<<":0"<<mak<<" AM";
        }    

        cout<<endl;

  }
}
