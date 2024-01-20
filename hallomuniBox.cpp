#include <bits/stdc++.h>
using namespace std;

int isSorted(long long arr[],int n){

    if(n==1 ){
        return 1;
    }
    if(arr[n-1]<arr[n-2]){
        return 0;
    }
    return isSorted(arr,n-1);

}
int main()
{
    int t;
    long long a[1200],n;
    long int k;
    cin >> t;

    while (t--)
    {
        cin >> n>>k;
        // vector<int> v;
        for(int i=0 ; i < n ;i++ ){
            cin>>a[i];
        }
        if(isSorted(a,n) || k>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
    }
}