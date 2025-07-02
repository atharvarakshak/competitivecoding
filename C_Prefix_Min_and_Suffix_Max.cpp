#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> nums(n),curSmallest(n),curLargest(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];

        }
        curSmallest[0]=nums[0];
        curLargest[n-1] = nums[n-1];
        int sm = nums[0], lg = nums[n-1];

        for(int i=1;i<n;i++){
     
            curSmallest[i] = min(curSmallest[i-1],nums[i]);

        }
        for(int i=n-2;i>=0;i--){
           curLargest[i] = max(curLargest[i+1],nums[i]);
     

        }
        string res="";
        for(int i=0;i<n;i++){
            if(nums[i]== curLargest[i] || nums[i]==curSmallest[i]){

                res+='1';
            }
            else{
                res+='0';
            }

        }
        cout<<res<<endl;
      



    }
    return 0;

}