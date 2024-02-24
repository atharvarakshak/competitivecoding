#include <bits/stdc++.h>
using namespace std;
    int findJudge(int n, vector<vector<int>>& trust) {
        int judge=trust[0][1];
        for(int i=1;i<n;i++){
            if(trust[i][1]!=judge){
                
                return -1;
            }
        }
        return judge;
    }
int main()
{
    cout<<findJudge(3,[[1,3],[2,3]]);
}