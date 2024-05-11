#include <bits/stdc++.h>
using namespace std;
// int longest_common_subsequence_length(string& str1, string& str2) {
//     int m = str1.length();
//     int n = str2.length();


//     vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));


//     for (int i = 1; i <= m; ++i) {
//         for (int j = 1; j <= n; ++j) {
//             if (str1[i - 1] == str2[j - 1]) {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//             } else {
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//             }
//         }
//     }

//     return dp[m][n];
// }

int main()
{
    int t;
   
    cin >> t;
    while (t --)
    {
        long long n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        
            long long j=0,c=0;
            for(int i=0;i<m  ;i++){
                if(j<n){
                    if(a[j]==b[i]){
                        j++;
                        c++;
                    }
                    
                }
            }
            cout<<c<<endl;
        


    }
}