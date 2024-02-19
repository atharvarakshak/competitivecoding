#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin>>n;
        int count=0,coins=0;
        vector<char> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            c=a[i];

            if(c=='@'){
                count=0;
                coins++;
            }
            else if(c=='.'){
                count=0;
            }
            else if(c=='*'){
                count++;
            }

            if(count>=2){
                break;
            }

        }
        cout<<coins<<endl;

    }
}