#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   
    cin >> t;
    while (t--)
    {
        int n,sum=0;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        // sort(a.begin(),a.end());
        int b=1;
        int num = sum/n ,c=0 ;
        for(int i=0;i<n;i++){
            if(a[0]<num){
                b=0;
                break;
            }
            if(a[i]>=num ){
                c += a[i]-num;
            }
            else if(a[i]<num){
                if(c>=num-a[i]){
                    c -= (num-a[i]);
                }
                else{
                    b=0;
                    break;
                }
            }
            
        }

        if(b==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
    }
}