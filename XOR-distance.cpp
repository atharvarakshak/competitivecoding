#include<bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int t; 
    cin >> t; 
     
    while (t--) { 
        int a, b, r; 
        cin >> a >> b >> r; 
         
        int Min = a | 0; 
        int Max = b | 0;  
 
        for (int i = 1; i <= r; i++) { 
            Min = min((a | i), Min); 
            Max = max((b | i), Max); 
        } 
 
        int ans = abs(Min - Max); 
        cout << ans << endl; 
    } 
 
    return 0; 
}