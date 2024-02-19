#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t;
  
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        vector<int> a;
        for(int i=0;i<n;i++){
            cin>>s;

        int count=0;
            for(int j=0;j<n;j++){

                if(s[j]=='1'){
                    count++;
                }
            }
            if(count >  0){
                a.push_back(count);
            }
        }
        if(a[0]==a[1]){
            cout<<"SQUARE"<<endl;
        }   
        else{

             cout<<"TRIANGLE"<<endl;
        }

    }
}