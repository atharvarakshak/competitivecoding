#include <bits/stdc++.h>
using namespace std;

int n = 3;

void solve(vector<int> a,int k , vector<vector<int>> &subsets,vector<int> &curr)
{
    if(k==n){

        subsets.push_back(curr);

        return;


    }
    else{

    
    
    curr.push_back(a[k]);
    solve(a,k+1,subsets,curr);

    curr.pop_back();
    
    solve(a,k+1,subsets,curr);
    }
    


}


int main()
{

    vector<int> a={1,2,3};
    vector<vector<int>> subsets;
    vector<int> curr;
    solve(a,0,subsets,curr);
    for(int i=0;i<subsets.size();i++){
        for(int j=0;j<subsets[i].size();j++){

            cout<<subsets[i][j]<<" ";
        }
        cout<<endl;
    }
  

}