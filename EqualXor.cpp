#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;

while(t--) {
        int n,k;
        cin>>n>>k;

        vector<int> arr(2*n);
        for (int i=0;i<(2*n);i++) {
            cin >> arr[i];
        }
        vector<int> fi(n), se(n),le,re;
       

        copy(arr.begin() ,arr.begin()+ n,fi.begin());


        copy(arr.begin()+n,arr.end(),se.begin());

        for(int i=0;i<(2*k);i++) {

            re.push_back(se[i]);
            le.push_back(fi[i]);


        }

        for (int i=0;i<le.size();i++) {
                        cout << le[i] << " ";
                    }
       cout <<"\n";

        for (int i=0;i<re.size();i++) {
            cout<<re[i]<<" ";
        }
        cout <<"\n";
        }

    
}
