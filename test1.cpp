#include<bits/stdc++.h>
using namespace std;

int main(){
       cout<<(2^2);
      class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return 0;
    }
};
}
   
