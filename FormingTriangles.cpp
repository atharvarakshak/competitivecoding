#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n,t;
      cin>>t;
      while(t--)
      {
        long long n,count=0;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
         for (int i = n - 1; i >= 2; i--){
            int left=0,right=i-1;
            while(left<right){
                if((a[left]+a[right])>a[i]){
                    count += (right-left);
                    right--;
                }
                else{

                    left++;
                }

            }
        }
         cout << count << endl;
      }
}