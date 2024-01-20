#include<iostream>
using namespace std;
int main()
{
    int sum,digit;
    sum=0;
    digit=1;
    while(digit<=99)
    {
        sum+=digit;
        digit++;

    }
    cout<<"Sum="<<sum<<endl;
    return 0;
}