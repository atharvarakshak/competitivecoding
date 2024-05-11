#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
                cin>>a[i];
        }
        bool ok = false;
        for (int i = 0; i < n-1; i++){
            for(int j=i+1;j<n;j++){

               if(a[i]==j+1 && a[j]==i+1){
                    ok = true;
                    break;
               } 
            }
        
        }
        if(ok){
            cout<<"2\n";
        }
        else{
            cout<<"3\n";

        }

    }
}