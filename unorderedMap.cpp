#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    vector<int> arr={11,12,11,5,13,12,7,9};
    unordered_map<int,int> count;
    for(int x:arr)
    {
        count[x]++;
        
    }
    
    for(int x: arr)
    {
        for( int x:arr)
        {
            cout<<count[x]<<" ";
        }
        cout<<endl;
        if(count[x]>0){
            sum+=x;
            count[x]=0;
        }
    }
    cout<<"sum: "<<sum<<endl;
}