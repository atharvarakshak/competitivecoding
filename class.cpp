#include<iostream>
using namespace std;

class data
{
    private:
    int day;
    int month;
    int year;
    public:
    void getdata(int day,int month,int year)
    {
        cout<<"ENTER DATE"<<endl;
        cin>>day>>month>>year;

    }
    void display()
    {
        cout<<"todays date="<<day<<endl;
        cout<<month<<"\n"<<year<<endl;
    }

};
int main()
{
    
    class date today;
    today.getdata();
    today.display();
    return 0;
}

