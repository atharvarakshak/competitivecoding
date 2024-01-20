#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
   cin>>n;
  char pre; 
  cin>>pre;
  int count=0;
  for(int i=0;i<n-1;i++)
  {
    char cur;
    cin>>cur;
    if(cur==pre)
    {
      count++;
    }
    else
    {
      pre=cur;
    }
  }
  cout<<count;
}